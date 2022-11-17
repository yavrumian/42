/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:44:59 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/17 16:45:14 by vyavrumy         ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	nn;
	int	src_len;

	nn = n;
	src_len = ft_len(src);
	i = -1;
	while (++i < nn)
	{
		if (i < src_len)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
