/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:05:43 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/23 14:35:56 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] || s2[i])
	{
		if (s1[i] != s2[i])
			break ;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_char_tab(char **tab, int size)
{
	int	curr;
	int	least;
	int	i;

	curr = 1;
	while (curr <= size - 1)
	{
		least = curr;
		i = curr;
		while (i <= size - 1)
		{
			if (ft_strcmp(tab[i], tab[least]) < 0)
				least = i;
			i++;
		}
		if (curr != least)
			ft_swap(&tab[curr], &tab[least]);
		curr++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	ft_sort_char_tab(argv, argc);
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			write(1, &argv[i][j], 1);
		write(1, "\n", 1);
	}
	return (0);
}
