/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:14:27 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/12/07 16:14:29 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void    *ft_calloc(size_t count, size_t size)
{
        void    *p;
        size_t  i;

        p = malloc(count * size);
        i = 0;
        if (p == NULL)
                return (p);
        while (i < size * count)
        {
                ((unsigned char *)p)[i] = 0;
                ++i;
        }
        return (p);
}

char	*reader(char *buf, int fd, ssize_t size)
{
	char	*chunk;
	char	*tmp;

	if(buf && buf[0] == '1')
		return NULL;
	if (ft_strchr(buf, '\n'))
		return (buf);
	chunk = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!chunk)
		return (NULL);
	while (!ft_strchr(chunk, '\n') && size == BUFFER_SIZE)
	{
		size = read(fd, chunk, BUFFER_SIZE);
		if (size == -1)
		{
			free(chunk);
			return (NULL);
		}
		chunk[size] = '\0';
		tmp = buf;
		buf = ft_strjoin(tmp, chunk);
		if (!buf){
			free(chunk);
			return (NULL);
		}
		free(tmp);
		if (size != BUFFER_SIZE)
			break ;
	}
	free(chunk);
	return (buf);
}

char	*get_line(char *buf)
{
	char	*nl;

	if (!buf || buf[0] == '1')
		return (NULL);
	nl = ft_strchr(buf, '\n');
	if (!nl)
	{
		nl = ft_strchr(buf, '\0');
		if (nl)
			return (buf);
		return (NULL);
	}
	return (ft_substr(buf, 0, nl - buf + 1));
}

char	*new_buf(char *buf)
{
	size_t	buf_len;
	char	*new_buff;
	char	*nl;
	nl = ft_strchr(buf, '\n');
	if (!nl)
		return (buf);
	buf_len = ft_strlen(buf);
	new_buff = ft_substr(buf, nl - buf + 1, buf_len - (nl - buf));
	free(buf);
	if (!new_buff)
		return (NULL);
	return (new_buff);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char 		*tmp;
	char		*line;

	if(BUFFER_SIZE <= 0 || fd < 0 || fd > OPEN_MAX)
		return (NULL);

	if(buf && buf[0] == '1'){
		return NULL;
	}
	buf = reader(buf, fd, BUFFER_SIZE);
	if (!buf){
		return (NULL);
	}
	line = get_line(buf);
	if (!line || !line[0]){
		free(buf);
		buf = "1";
		return (NULL);
	}
	buf = new_buf(buf);
	if (!buf)
	{
		return (NULL);
	}
	printf("\n###$%s$\n", line);
	return (line);
}

