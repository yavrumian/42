/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:14:46 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/22 21:46:43 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	numlen(int n)
{
	size_t	i;
	char	sign;

	sign = 0;
	if (n <= 0)
		sign = 1;
	i = 1;
	while (n)
	{
		++i;
		n /= 10;
	}
	return (i + sign);
}

static int	mod(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		nn;

	nn = n;
	i = numlen(n);
	str = malloc(sizeof(char) * i);
	if (!str)
		return (NULL);
	str[--i] = '\0';
	while (--i >= 0)
	{
		str[i] = mod(n % 10) + 48;
		n /= 10;
	}
	if (nn < 0)
		str[0] = '-';
	return (NULL);
}
