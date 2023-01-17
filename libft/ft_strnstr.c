/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:26:55 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/21 20:25:09 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

<<<<<<< Updated upstream:libft/ft_strnstr.c
int	cmp(char *a, char *b)
=======
#include "libft.h"

char	*ft_memcpy(void *dest, const void *src, size_t n)
>>>>>>> Stashed changes:libft/ft_memcpy.c
{
	while (*a && *b)
	{
<<<<<<< Updated upstream:libft/ft_strnstr.c
		if (*a != *b)
			return (0);
		a++;
		b++;
=======
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
			++i;
>>>>>>> Stashed changes:libft/ft_memcpy.c
	}
	return (*b == '\0');
}

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0' && len--)
	{
		printf("%zu\n", len);
		if ((*haystack == *needle) && cmp(haystack, needle))
			return (haystack);
		haystack++;
	}
	return (NULL);
}