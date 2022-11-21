/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:43:36 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/20 15:56:06 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	di;
	int	i;
	int	nn;
	int	dest_len;

	nn = size;
	dest_len = ft_strlen(dest);
	i = -1;
	di = ft_strlen(dest);
	while (++i < nn - dest_len - 1)
	{
		dest[di] = src[i];
		++di;
	}
	dest[di] = 0;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(){
	char s1[] = "my source";
	char s2[13] = "this is";
	char o1[] = "my source";
	char o2[13] = "this is";
	printf("%i\n", ft_strlen(s2));
	ft_strlcat(s2, s1, 13);
	strlcat(o2, o1, 13);

	printf("%s\n", s2);
	printf("%s\n", o2);
	return 0;
}*/