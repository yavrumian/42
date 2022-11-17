/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:47:57 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/17 16:48:00 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthex(int i)
{
	write(1, "\\", 1);
	write(1, &"0123456789abcdef"[i / 16], 1);
	write(1, &"0123456789abcdef"[i % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_puthex(str[i]);
			continue ;
		}
		write(1, &str[i], 1);
	}
}
/*
int main(){
	char st[] = "som \r e \a te\nxt";

	ft_putstr_non_printable(st);
	return 0;

}*/
