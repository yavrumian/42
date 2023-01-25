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
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int	last_digit;

	if (n == 0)
		return ;
	if (n < 0)
		last_digit = -(n % 10) + '0';
	else
		last_digit = (n % 10) + '0';
	if (n < 0 && n >= -11)
		write(fd, "-", 1);
	n /= 10;
	ft_putnbr_fd(n, fd);
	write(fd, &last_digit, 1);
}
