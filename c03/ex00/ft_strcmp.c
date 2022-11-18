/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:26:20 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/18 10:27:14 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] || s2[i])
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
	char s2[] = "hello";
	
	printf("my: %i\n", ft_strcmp(s1, s2));

	printf("orig: %i\n", strcmp(s1, s2));
	return 0;
}*/
