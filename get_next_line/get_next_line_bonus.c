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

#include "get_next_line_bonus.h"

char	*reader(char *buf, int fd, ssize_t size)
{
	char	*chunk;
	char	*tmp;

	if (ft_strchr(buf, '\n'))
		return (buf);
	chunk = malloc(BUFFER_SIZE + 1);
	if (!chunk)
		return (NULL);
	chunk[size] = '\0';
	while (!ft_strchr(chunk, '\n') && size == BUFFER_SIZE)
	{
		size = read(fd, chunk, BUFFER_SIZE);
		if (size == -1)
			return (NULL);
		chunk[size] = '\0';
		tmp = buf;
		buf = ft_strjoin(tmp, chunk);
		if (!buf)
			return (NULL);
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

	if (!buf)
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
	if (!new_buff)
		return (NULL);
	free(buf);
	return (new_buff);
}

char	*get_next_line(int fd)
{
	static char	*buf[OPEN_MAX];
	char		*line;

	buf[fd] = reader(buf[fd], fd, BUFFER_SIZE);
	if (!buf[fd])
		return (NULL);
	line = get_line(buf[fd]);
	if (!line)
		return (NULL);
	buf[fd] = new_buf(buf[fd]);
	if (!buf[fd])
		return (NULL);
	return (line);
}
