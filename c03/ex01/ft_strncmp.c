/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:40:33 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/22 19:55:11 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(){
	char s1[] = "ba";
	char s2[] = "a";
	
	int n = 3;
	printf("my: %i\n", ft_strncmp(s1, s2, n));

	printf("orig: %i\n", strncmp(s1, s2, n));
	return 0;
}*/
