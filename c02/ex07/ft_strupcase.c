/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:46:03 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/17 16:46:06 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);
}
/*#include <unistd.h>
int main(){
	char a[] = "  alut, comment    tu vas ? 42mots quaRan e-deux; cinquante+et+un";

	ft_strcapitalize(a);
	int i = -1;
	while(a[++i])
		write(1, &a[i], 1);
	return 0;
}*/
