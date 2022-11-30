/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:47:33 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/28 22:32:45 by vyavrumy         ###   ########.fr       */
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

/*#include <stdio.h>
int main()
{
	printf("%i: %i\n", 3, ft_is_prime(3));
	printf("%i: %i\n", 1, ft_is_prime(1));
	printf("%i: %i\n", 2, ft_is_prime(2));
	printf("%i: %i\n", 3, ft_is_prime(3));
	printf("%i: %i\n", 4, ft_is_prime(4));
	printf("%i: %i\n", 5, ft_is_prime(5));
	printf("%i: %i\n", 6, ft_is_prime(6));
	printf("%i: %i\n", 7, ft_is_prime(7));
	printf("%i: %i\n", 11, ft_is_prime(11));
	printf("%i: %i\n", 13, ft_is_prime(13));
	printf("%i: %i\n", 15, ft_is_prime(15));
	printf("%i: %i\n", 17, ft_is_prime(17));
	printf("%i: %i\n", 19, ft_is_prime(19));
	printf("%i: %i\n", 20, ft_is_prime(20));
	printf("%i: %i\n", 66, ft_is_prime(66));
	printf("%i: %i\n", 67, ft_is_prime(67));

}*/
