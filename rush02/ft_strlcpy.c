/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 02:40:57 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/27 02:40:58 by vyavrumy         ###   ########.fr       */
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
	dest[i] = '\0';
	return (dest);
}
