/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:33:23 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/23 13:41:27 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	while (--argc)
	{
		j = -1;
		while (argv[argc][++j])
			write(1, &argv[argc][j], 1);
		write(1, "\n", 1);
	}
	return (0);
}
