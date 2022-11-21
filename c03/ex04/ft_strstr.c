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

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if ((*str == *to_find) && cmp(str, to_find))
			return (str);
		str++;
	}
	return (NULL);
}
/*
int	main()
{
	char str[] = "";
 
 
	printf("%s\n", ft_strstr(str, ""));
	printf("%s\n", ft_strstr(str, "eHe"));
	printf("%s\n", ft_strstr(str, "lde"));
	printf("%s\n", ft_strstr(str, " "));
    return 0;
}*/
