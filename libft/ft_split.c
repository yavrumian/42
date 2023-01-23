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
};

char	**ft_split(char const *s, char c)
{
	struct s_counters	counts;
	char				*trimmed;
	char				**res;
	int					count;

	trimmed = c_trim((char *)s, c);
	counts.reslen = arrlen(trimmed, c);
	res = ft_calloc(sizeof(char *), counts.reslen);
	counts.i = 0;
	count = 0;
	while (trimmed[counts.i])
	{
		if (count == (int)(counts.reslen) - 1)
			c = '\0';
		counts.len = ft_strchr(trimmed + counts.i, c) - (trimmed + counts.i);
		res[count] = ft_calloc(counts.len + 1, sizeof(char));
		ft_memcpy(res[count], trimmed + counts.i, counts.len);
		counts.i = counts.len + counts.i;
		while (trimmed[counts.i] == c)
			if (!trimmed[counts.i++])
				break ;
		++count;
	}
	res[count] = NULL;
	return (res);
}
