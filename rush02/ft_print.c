/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 21:10:26 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/27 23:30:49 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*search(char ***tab, char *find);

void	putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		++str;
	}	
}

int	ft_print(char ***dict, char **str)
{
	int		i;
	char	*res;

	i = 0;
	while (str[i])
	{
		res = search(dict, str[i]);
		if (!res)
			return (0);
		putstr(res);
		putstr(" ");
		++i;
	}
	putstr("\n");
	return (1);
}
