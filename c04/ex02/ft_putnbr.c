/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:14:46 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/21 12:53:57 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	last_digit;

	if (nb == 0)
		return ;
	if (nb < 0)
		last_digit = -(nb % 10) + '0';
	else
		last_digit = (nb % 10) + '0';
	nb /= 10;
	if (nb < 0 && nb >= -11)
		write(1, "-", 1);
	ft_putnbr(nb);
	write(1, &last_digit, 1);
}
/*
#include <stdio.h>
#include <limits.h>
int main()
{
		int num = 100001;
	printf("orig: %i\n", num);
	ft_putnbr(num);
	return 0;
}	*/
