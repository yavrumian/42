/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anuaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:02:10 by anuaveti          #+#    #+#             */
/*   Updated: 2022/11/13 23:06:38 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_len(char *c)
{
	int	i;

	i = 0;
	while (*(c + i) != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_pow(int base, int pow)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	while (i < pow)
	{
		res *= base;
		i++;
	}
	return (res);
}

int	ft_atoi(char *c)
{
	int	res;
	int	len;
	int	i;

	len = ft_len(c);
	res = 0;
	i = 0;
	while (len > 0)
	{
		if (*(c + i) < 48 || *(c + i) > 57)
			return (0);
		res += (*(c + i) - '0') * ft_pow(10, len - 1);
		i++;
		len--;
	}
	return (res);
}

void	def_behav(void)
{
	write(1, "Bad Parameters! Using default values: x = 9; y = 5\n\n", 52);
	rush(9, 5);
}

int	main(int argc, char *argv[])
{
	int	a_int;
	int	b_int;

	if (argc < 3)
	{
		def_behav();
	}
	else
	{
		a_int = ft_atoi(&argv[1][0]);
		b_int = ft_atoi(&argv[2][0]);
		if (a_int == 0 || b_int == 0)
		{
			def_behav();
		}
		else
		{
			rush(a_int, b_int);
		}
	}
	return (0);
}
