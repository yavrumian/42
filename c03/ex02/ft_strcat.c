/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:43:36 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/18 12:45:11 by vyavrumy         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	di;
	int	i;

	i = -1;
	di = ft_strlen(dest);
	while (src[++i])
	{
		dest[di] = src[i];
		++di;
	}
	dest[di] = 0;
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main(){
	char s1[] = "\0my source";
	char s2[8] = "this is";
	char o1[] = "\0my source";
	char o2[8] = "this is";
	ft_strcat(s2, s1);
	strcat(o2, o1);

	printf("%s\n", s2);
	printf("%s\n", o2);
	return 0;
}*/
