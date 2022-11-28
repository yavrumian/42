/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:28:57 by arahovha          #+#    #+#             */
/*   Updated: 2022/11/27 22:11:40 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	validate(char *string)
{
	unsigned long int	res;
	unsigned long int	n;

	n = 0;
	res = 0;
	while (string[n] == ' ')
		n++;
	if (string[n] == '+')
		n++;
	if (!(string[n] >= '0' && string[n] <= '9'))
		return (0);
	while (string[n] >= '0' && string[n] <= '9')
	{
		res *= 10;
		res += string[n];
		++n;
		res -= '0';
	}
	if(res > UINT_MAX)
		return 0;
	else 
		return 1;
}
