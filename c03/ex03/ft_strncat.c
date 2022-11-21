/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:43:36 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/21 20:16:04 by vyavrumy         ###   ########.fr       */
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
	while (i < nb)
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
	char s1[] = "";
	char s2[17] = "i";
	char o1[] = "";
	char o2[17] = "i";
	ft_strncat(s2, s1, 10);
	strncat(o2, o1, 10);

	printf("%s\n", s2);
	printf("%s\n", o2);
	return 0;
}*/
