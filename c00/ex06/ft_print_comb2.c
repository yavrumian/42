/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:14:46 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/13 14:25:52 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int num)
{
	char	n1;
	char	n2;

	n1 = num / 10 + '0';
	n2 = num % 10 + '0';
	write(1, &n1, 1);
	write(1, &n2, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_num(a);
			write(1, " ", 1);
			print_num(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
	write(1, "\n", 1);
}
