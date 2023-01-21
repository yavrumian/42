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

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while(i < n)
	{
		if(((unsigned char*)s)[i] == (unsigned char)c)
			return ((void *)(s+i));
		++i;
	}
	return (NULL);
}