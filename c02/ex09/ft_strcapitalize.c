/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:46:30 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/17 16:46:32 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	cap;
	int	i;

	i = -1;
	cap = 1;
	while (str[++i])
	{
		if ((str[i] >= 97 && str[i] <= 122) && cap)
			str[i] -= 32;
		if ((str[i] >= 65 && str[i] <= 90) && !cap)
			str[i] += 32;
		if (str[i] == 32 || str[i] == 45 || str[i] == 43)
			cap = 1;
		else
			cap = 0;
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
