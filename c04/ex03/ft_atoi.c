/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:05:59 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/21 15:32:00 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	res;

	res = 0;
	i = -1;
	sign = 1;
	while (str[++i] == ' ' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\t')
		;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
			res = res * 10 + (str[i] - '0');
			++i;
	}
	return (sign * res);
}
/*
#include <stdio.h>
int main()
{
	printf("\n%i\n", ft_atoi("  777  -+--478"));
}*/
