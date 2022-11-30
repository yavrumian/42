/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:48:53 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/28 22:34:34 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	if (nb % 2 == 0)
		++nb;
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb += 2;
	}	
}
/*
#include <stdio.h>
int main()
{
	printf("%i: %i\n", 0, ft_find_next_prime(0));
	printf("%i: %i\n", 1, ft_find_next_prime(1));
	printf("%i: %i\n", 2, ft_find_next_prime(2));
	printf("%i: %i\n", 3, ft_find_next_prime(3));
	printf("%i: %i\n", 4, ft_find_next_prime(4));
	printf("%i: %i\n", 8, ft_find_next_prime(8));
	printf("%i: %i\n", 90, ft_find_next_prime(90));
	printf("%i: %i\n", 61, ft_find_next_prime(61));
	printf("%i: %i\n", 92, ft_find_next_prime(92));
	printf("%i: %i\n", 440, ft_find_next_prime(440));
	printf("%i: %i\n", -74, ft_find_next_prime(-74));

}*/
