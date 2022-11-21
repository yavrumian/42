/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:23:51 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/21 17:25:12 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	while (nb)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*
#include <stdio.h>
int main()
{
	printf("%i\n", ft_iterative_factorial(12));
	printf("%i\n", ft_iterative_factorial(2));
	printf("%i\n", ft_iterative_factorial(1));
	printf("%i\n", ft_iterative_factorial(0));

}*/
