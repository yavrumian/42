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

char *ft_strrchr(const char *s, int c)
{

	size_t len;
	size_t i;
	len = ft_strlen(s);
	i = 0;

	while(i < len)
	{
		// printf("%c\n", s[len-i-1]);
		if(s[len-i-1] == c)
			return ((char*)(s+len-i-1));
		++i;		
	}
	if(c == 0)
		return ((char*)(s+len));
	return (NULL);
}