/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:36:52 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/27 18:39:08 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] || s2[i])
	{
		if (s1[i] == s2[i])
			continue ;
		break ;
	}
	return (s1[i] - s2[i]);
}

char *search(char ***tab, char *find)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if(!ft_strcmp(tab[i][0], find))
			return (tab[i][1]);
		++i;
	}
	return (NULL);
}
