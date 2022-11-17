/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:47:34 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/17 16:47:36 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	nn;
	int	src_len;

	nn = n;
	src_len = ft_len(src);
	i = -1;
	while (++i < nn - 1)
	{
		if (i < src_len)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	dest[++i] = '\0';
	return (dest);
}
/*#include <unistd.h>
int main(){
		char src[] = "sometest";
		char dst[20];
	int i = -1;
	ft_strlcpy(dst, src, 20);
	while(dst[++i])
			write(1, &dst[i], 1);
}*/
