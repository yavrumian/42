/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:09:12 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/13 19:43:32 by vyavrumy         ###   ########.fr       */
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

	ft_line(x, 47, 42, 92);
	i = 0;
	while (i < y - 2)
	{
		ft_line(x, 42, 32, 42);
		i++;
	}
	if (y > 1)
	{
		ft_line(x, 92, 42, 47);
	}
}
