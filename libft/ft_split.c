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

char	**ft_split(char const *s, char c)
{
	size_t	arrlen;
	char	*trimmed;
	size_t	i;
	char	del[2];

	del[0] = c;
	del[1] = '\0';
	i = 0;
	trimmed = ft_strtrim(s, del);
	arrlen = 1;
	while (trimmed[i])
	{
		if (trimmed[i] == c)
		{
			++arrlen;
			while (trimmed[i] == c)
			{
				++i;
			}
				// printf(">>\n");
		}
		else
			++i;
	}
	printf(">>%zu \n", arrlen);
	return NULL;

}