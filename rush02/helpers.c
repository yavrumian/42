/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:56:11 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/27 16:58:12 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strlcpy(char *dest, char *src, unsigned int n);
int		lines(char *str);

void	norm(int *i, int *count, char *str)
{	
	while (str[*i] == ' ' || str[*i] == '\t'
		|| str[*i] == '\v' || str[*i] == '\f')
		++(*i);
	*count = 0;
	while (str[*i] > 32 && str[*i] < 127)
	{
		++(*count);
		++(*i);
	}
}

char	***init(int *i, int *line, int *nol, char *str)
{
	char	***wrap;

	*i = 0;
	*nol = lines(str);
	*line = 0;
	wrap = (char ***)malloc(((*nol) + 1) * sizeof(char *));
	if (!wrap)
		return (NULL);
	return (wrap);
}

char	*norm2(int *count, char *str, int *i, char ***wrap)
{
	*count = 0;
	if (!(str[*i] >= '0' && str[*i] <= '9'))
		return (NULL);
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		++(*count);
		++(*i);
	}
	return ("");
}

char	*norm3(char **wrap, int count, int *i, char *str)
{
	wrap[0] = malloc(count + 1);
	if (!wrap[0])
		return (NULL);
	ft_strlcpy(wrap[0], &str[*i - count], count + 1);
	while (str[*i] == ' ' || str[*i] == '\t'
		|| str[*i] == '\v' || str[*i] == '\f')
		++(*i);
	if (str[(*i)++] != ':')
		return (NULL);
	return ("");
}

char	*norm4(char **wrap, int count, int i, char *str)
{
	wrap[1] = malloc(count + 1);
	if (!wrap[1])
		return (NULL);
	ft_strlcpy(wrap[1], &str[i - count], count + 1);
	if (str[i] != '\n')
		return (NULL);
	return ("");
}
