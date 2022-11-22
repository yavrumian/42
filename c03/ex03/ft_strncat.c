/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:43:36 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/22 20:23:49 by vyavrumy         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				di;
	unsigned int	i;

	i = 0;
	di = ft_strlen(dest);
	while (src[i] && i < nb)
	{
		dest[di] = src[i];
		++di;
		++i;
	}
	dest[di] = 0;
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main(){
	char s1[] = "1234";
	char s2[10] = "i";
	char o1[] = "1234";
	char o2[10] = "i";
	ft_strncat(s2, s1, 90);
//	strncat(o2, o1, 90);

	printf("%s\n", s2);
	printf("%s\n", o2);
	return 0;
}*/
