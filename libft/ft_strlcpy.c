/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:47:34 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/17 16:47:36 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(const char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t i;
	int	src_len;

	src_len = ft_len(src);
	i = 0;
	if(dstsize == 0)
		return (src_len);
	while (i < dstsize - 1)
	{
		if (i < (size_t)src_len)
			dst[i] = src[i];
		else
			dst[i] = '\0';
		++i;
	}
	dst[i] = '\0';
	return (src_len);
}
