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

int	cmp(char *a, char *b)
{
	while (*a && *b)
	{
		if (*a != *b)
			return (0);
		a++;
		b++;
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
