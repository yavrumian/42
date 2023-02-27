/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:13:38 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/12/07 16:13:39 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_ptr(uintptr_t nb, size_t len)
{
	long unsigned int	base_len;
	char	*base;

	base = "0123456789abcdef";
	base_len = ft_strlen(base);
	if (nb < base_len)
	{
		ft_putchar(base[nb]);
		return (++len);
	}
	if (nb >= base_len)
	{
		len = ft_put_ptr(nb / base_len, len);
		len = ft_put_ptr(nb % base_len, len);
	}
	return len;
}

size_t	printer(va_list ap, char c)
{
	size_t	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
	{
		len += ft_putstr("0x");
		len += ft_put_ptr(va_arg(ap, intptr_t), 0);
	}
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(ap, int), 0);
	else if (c == 'u')
		len += ft_putnbr_u(va_arg(ap, unsigned int), 0);
	else if (c == 'x')
		len += ft_putnbr_base(va_arg(ap, uint), "0123456789abcdef", 0);
	else if (c == 'X')
		len += ft_putnbr_base(va_arg(ap, uint), "0123456789ABCDEF", 0);
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	char	*convs;
	size_t	i;
	size_t	len;
	va_list	ap;

	i = 0;
	len = 0;
	convs = "cspdiuxX%";
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr(convs, str[i + 1]) && ++i)
		{
			len += printer(ap, str[i]);
			++i;
		}
		else
			len += ft_putchar(str[i++]);
	}
	return (len);
}

// int	main(){
// 	char *s = "test";
//     char *gag = "%i %s %p %d %i %u %x %X %%\n";
// 	// printf("\n#%i", printf(gag, 'c', s, gag, 4, 5, UINT_MAX, 987654321, 123456789) == ft_printf(gag, 'c', s, gag, 4, 5, UINT_MAX, 987654321, 123456789));
//     printf("\n%zu", ft_putnbr_base(147684, "0123456789abcdef", 0));
//     // printf("\n%zu", ft_put_ptr((intptr_t)gag, 0));

//     // ft_printf("he %c yhetoel %c iskheto %s text", 'e', '\n', test);
//     return 0;
// }