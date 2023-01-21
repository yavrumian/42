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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *p;
	size_t i;

	if(start >= ft_strlen(s))
		return ft_strdup("");
	p = malloc((sizeof(char) * len) + 1);
	if(p == NULL)
		return (p);
	i = 0;
	while(i < len && s[i])
	{
		p[i] = s[start + i];
		++i;
	}
	p[i] = 0;
	return p;
}