/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:39:46 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/21 18:40:32 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 1)
		return (1);
	while (++i <= nb / 2)
	{
		if (nb / i == i && nb % i == 0)
			return (i);
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%i\n", ft_sqrt(4));
	printf("%i\n", ft_sqrt(53));
	printf("%i\n", ft_sqrt(79));
	printf("%i\n", ft_sqrt(1));
	printf("%i\n", ft_sqrt(9));
}*/
