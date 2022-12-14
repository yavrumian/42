/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:58:00 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/15 23:02:53 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	curr;
	int	least;
	int	i;

	curr = 0;
	while (curr <= size - 1)
	{
		least = curr;
		i = curr;
		while (i <= size - 1)
		{
			if (*(tab + i) < *(tab + least))
				least = i;
			i++;
		}
		if (curr != least)
			ft_swap(tab + curr, tab + least);
		curr++;
	}
}
