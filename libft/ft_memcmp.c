/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:40:33 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/24 19:52:43 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t	i;

	i = 0;
	while ((*((unsigned char*)(s1+i)) || *((unsigned char*)(s2+i))) && i < n)
	{
		if (*((unsigned char*)(s1+i)) != *((unsigned char*)(s2+i)))
			return (*((unsigned char*)(s1+i)) - *((unsigned char*)(s2+i)));
		printf("%i\n", (*((unsigned char*)(s1+i)) == 0));
		printf("%i\n", (*((unsigned char*)(s1+i)) || *((unsigned char*)(s2+i))));
		printf("%i\n", (*((unsigned char*)(s2+i))) == 0);
		++i;
	}
	if (i != n)
		return (*((unsigned char*)(s1+i)) - *((unsigned char*)(s2+i)));
	return (0);
}