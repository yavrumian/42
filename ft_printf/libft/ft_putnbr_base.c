/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:24:38 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/12 00:27:43 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_base(uint nb, char *base, size_t len)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (nb < (uint)base_len)
	{
		ft_putchar(base[nb]);
		return (++len);
	}
	if (nb >= (uint)base_len)
	{
		len = ft_putnbr_base(nb / base_len, base, len);
		len = ft_putnbr_base(nb % base_len, base, len);
	}
	return len;
}
