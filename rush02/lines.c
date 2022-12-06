/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lines.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:54:49 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/27 23:32:08 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lines(char *str)
{
	int	i;
	int	line;

	line = 0;
	i = -1;
	while (str[++i])
		if (str[i] == '\n')
			++line;
	return (line);
}