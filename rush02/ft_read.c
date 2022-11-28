/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 02:40:49 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/27 02:40:52 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_flen(char *filename)
{
	int		fd;
	int		i;
	char	buf[1];
	int		size;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	size = 1;
	i = 0;
	while (size != 0)
	{
		size = read(fd, buf, 1);
		++i;
	}
	close(fd);
	return (i);
}

char	*ft_read(char *filename)
{
	int		len;
	int		fd;
	char	*str;

	len = ft_flen(filename);
	if (!len)
		return (NULL);
	str = malloc(len);
	if (!str)
		return (NULL);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	read(fd, str, len);
	str[len - 1] = '\0';
	close(fd);
	return (str);
}
