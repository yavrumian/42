/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:40:33 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/21 20:03:26 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n - 1)
	{
		if (s1[i] == s2[i])
		{
			++i;
			continue ;
		}
		break ;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main(){
	char s1[] = "baaa";
	char s2[] = "aaaa";
	
	int n = 5;
	printf("my: %i\n", ft_strncmp(s1, s2, n));

	printf("orig: %i\n", strncmp(s1, s2, n));
	return 0;
}*/
