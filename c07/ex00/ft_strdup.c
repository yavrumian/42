/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:04:05 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/29 20:05:59 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*res;

	i = -1;
	while (src[++i])
		;
	j = 0;
	res = malloc(i);
	while (j < i)
	{
		res[j] = src[j];
		++j;
	}
	return (res);
}
/*
#include <stdio.h>
int main()
{
	char *str = "heyvfser";

	printf("%s\n", ft_strdup(str));
}*/
