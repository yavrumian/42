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
