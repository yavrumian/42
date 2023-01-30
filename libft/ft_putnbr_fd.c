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

void	ft_putnbr_fd(int n, int fd)
{
if (n == INT_MIN)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    if (n >= 10)
        ft_putnbr_fd(n / 10, fd);
    n = n % 10 + '0';
    write(fd, &n, 1);
}
