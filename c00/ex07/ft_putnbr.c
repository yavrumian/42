/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:14:46 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/13 01:56:13 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

long	ft_abs(long i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}

long	reverser(int num, long reverse)
{
	int	last_digit;

	last_digit = num % 10;
	if (num == 0)
	{
		return (reverse);
	}
	num /= 10;
	reverse = reverse * 10 + last_digit;
	return (reverser(num, reverse));
}

int	ft_size(long num, int size)
{
	if (num == 0)
	{
		return (size);
	}
	num /= 10;
	size++;
	return (ft_size(num, size));
}

void	ft_putnbr(int nb)
{
	long	reverse;
	int		rev_size;
	char	c;
	int		i;

	reverse = ft_abs(reverser(nb, 0));
	rev_size = ft_size(reverse, 0);
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
		write(1, "-", 1);
	while (reverse != 0)
	{
		c = reverse % 10 + '0';
		reverse /= 10;
		write(1, &c, 1);
	}
	i = 0;
	while (i < (ft_size(nb, 0) - rev_size))
	{
		write(1, "0", 1);
		i++;
	}
}
