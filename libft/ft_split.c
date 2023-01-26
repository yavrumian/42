/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:13:38 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/12/07 16:13:39 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	arrlen(char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			++len;
			while (s[i] == c)
				++i;
		}
		else
			++i;
	}
	return (len);
}

static	char	*c_trim(char *s, char c)
{
	char	del[2];

	del[0] = c;
	del[1] = '\0';
	return (ft_strtrim(s, del));
}

struct s_counters
{
	size_t	reslen;
	size_t	i;
	size_t	len;
	int		count;
	char	*t;
};

char	**ft_split(char const *s, char c)
{
	struct s_counters	counts;
	char				**res;

	counts.t = c_trim((char *)s, c);
	counts.reslen = arrlen(counts.t, c);
	res = ft_calloc(counts.reslen + 1, sizeof(char *));
	if (!res)
		return (NULL);
	counts.i = 0;
	counts.count = 0;
	while (counts.t[counts.i])
	{
		if (counts.count == (int)(counts.reslen) - 1)
			c = '\0';
		counts.len = ft_strchr(counts.t + counts.i, c) - (counts.t + counts.i);
		res[counts.count] = ft_calloc(counts.len + 1, sizeof(char));
		ft_memcpy(res[counts.count], counts.t + counts.i, counts.len);
		counts.i = counts.len + counts.i;
		while (counts.t[counts.i] == c)
			if (!counts.t[counts.i++])
				break ;
		++counts.count;
	}
	free(counts.t);
	res[counts.count] = NULL;
	return (res);
}
