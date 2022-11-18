/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:40:33 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/18 10:40:36 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	nn;

	nn = n;
	i = -1;
	while ((s1[++i] || s2[i]) && i < nn - 1)
	{
		if (s1[i] == s2[i])
			continue ;
		break ;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main(){
	char s1[] = "hello world, nice day";
	char s2[] = "hello \0";
	
	int n = 200;
	printf("my: %i\n", ft_strncmp(s1, s2, n));

	printf("orig: %i\n", strncmp(s1, s2, n));
	return 0;
}*/
