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

size_t	ft_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = -1;
	while (s[++i])
		;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*p;
	size_t	i;
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	p = malloc((sizeof(char) * (l1 + l2)) + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		p[i] = s1[i];
		++i;
	}
	while (i < l1 + l2)
	{
		p[i] = s2[i - l1];
		++i;
	}
	p[i] = 0;
	return (p);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = -1;
	while (s[++i])
		if (s[i] == (char)c)
			return ((char *)(s + i));
	if (c == 0)
		return ((char *)(s + i));
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	p = malloc((sizeof(char) * len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		p[i] = s1[i];
		++i;
	}
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		p[i] = s[start + i];
		++i;
	}
	p[i] = 0;
	return (p);
}
