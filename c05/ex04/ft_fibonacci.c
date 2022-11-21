/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:30:24 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/21 17:45:00 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(--index) + ft_fibonacci(--index));
}
/*
#include <stdio.h>
int main()
{
	printf("%i\n", ft_fibonacci(0));
	printf("%i\n", ft_fibonacci(1));
	printf("%i\n", ft_fibonacci(2));
	printf("%i\n", ft_fibonacci(3));
	printf("%i\n", ft_fibonacci(4));
	printf("%i\n", ft_fibonacci(5));
	printf("%i\n", ft_fibonacci(6));
	printf("%i\n", ft_fibonacci(7));

}*/
