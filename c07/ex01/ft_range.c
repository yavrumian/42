/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:45:39 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/29 20:06:42 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;

	if (max - min < 1)
		return (NULL);
	len = max - min;
	arr = malloc(sizeof(int) * len);
	while (--len >= 0)
		arr[len] = --max;
	return (arr);
}
/*
#include <stdio.h>
int main()
{
	int *arr = ft_range(5, 4);

	int i = -1;
	if(!arr)
		return 0;
	while(++i < 1)
		printf("%i\n", arr[i]);
}*/
