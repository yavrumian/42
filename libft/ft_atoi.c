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

<<<<<<< Updated upstream:libft/ft_atoi.c
int	ft_atoi(const char *str)
=======
#include "libft.h"

char	*ft_memcpy(void *dest, const void *src, size_t n)
>>>>>>> Stashed changes:libft/ft_memcpy.c
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
	if (str[i] == '-' || str[i] == '+')
	{
<<<<<<< Updated upstream:libft/ft_atoi.c
		if (str[i] == '-')
			sign *= -1;
		i++;
=======
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
			++i;
>>>>>>> Stashed changes:libft/ft_memcpy.c
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
			res = res * 10 + (str[i] - '0');
			++i;
	}
	return (sign * res);
}