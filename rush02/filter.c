/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 22:12:54 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/27 23:29:05 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*filter(char *str)
{
	int		i;
	int		num_len;
	char	*filtered;

	i = 0;
	num_len = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
		++i;
	while (str[i] >= '0' && str[i] <= '9')
	{
			++num_len;
			++i;
	}
	filtered = malloc(num_len + 1);
	i = 0;
	num_len = -1;
	while (!(str[i] >= '0' && str[i] <= '9'))
		++i;
	while (str[i] >= '0' && str[i] <= '9')
	{
			filtered[++num_len] = str[i];
			++i;
	}
	filtered[num_len + 1] = '\0';
	return (filtered);
}
