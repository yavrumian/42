/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:44:59 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/17 16:45:14 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!(dest || src))
		return (dest);
	i = 0;
	while (i < n)
	{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			++i;
	}
	return (dest);
}
