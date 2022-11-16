/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:09:12 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/13 21:09:17 by arahovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(int len, char f, char m, char l)
{
	int	i;

	ft_putchar(f);
	i = 0;
	while (len > 2 && i < len - 2)
	{
		ft_putchar(m);
		i++;
	}
	if (len > 1)
	{
		ft_putchar(l);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	ft_line(x, 111, 45, 111);
	i = 0;
	while (i < y - 2)
	{
		ft_line(x, 124, 32, 124);
		i++;
	}
	if (y > 1)
	{
		ft_line(x, 111, 45, 111);
	}
}
