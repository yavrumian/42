/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:27:37 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/21 17:27:39 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, --power));
}
/*
#include <stdio.h>
int main()
{
	printf("%i\n", ft_recursive_power(2, 2));
	printf("%i\n", ft_recursive_power(2, 0));
	printf("%i\n", ft_recursive_power(0, 0));
	printf("%i\n", ft_recursive_power(0, 2));
	printf("%i\n", ft_recursive_power(2, 10));
	printf("%i\n", ft_recursive_power(10, 5));
	printf("%i\n", ft_recursive_power(14, 1));
	printf("%i\n", ft_recursive_power(1, 2));

}*/
