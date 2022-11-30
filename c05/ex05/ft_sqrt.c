/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:39:46 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/28 22:36:03 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb / 46340 > 46340)
		return (0);
	while (++i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
	}
	return (0);
}
/*
#include <limits.h>
#include <stdio.h>
int main()
{
	printf("%i\n", ft_sqrt(2147395600));
	printf("%i\n", ft_sqrt(INT_MAX));
	printf("%i\n", ft_sqrt(79));
	printf("%i\n", ft_sqrt(1));
	printf("%i\n", ft_sqrt(9));
}*/
