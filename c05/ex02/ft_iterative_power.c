/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:26:58 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/21 17:27:00 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
		res *= nb;
	return (res);
}
/*
#include <stdio.h>
int main()
{
	printf("%i\n", ft_iterative_power(2, 4));
	printf("%i\n", ft_iterative_power(0, 0));
	printf("%i\n", ft_iterative_power(5, 0));
	printf("%i\n", ft_iterative_power(2, 10));
	printf("%i\n", ft_iterative_power(7, 1));
	printf("%i\n", ft_iterative_power(10, 4));
}*/
