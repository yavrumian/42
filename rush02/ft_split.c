/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:31:05 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/27 23:31:40 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int		ft_strlen(char *str);
int		ft_zerocheck(char *str, int pos, int len);
int		ft_size(int len, char *str);
char	*ft_putpower(char *str, int size);

void	ft_arr_fill(char *str, char **arr, int len, int size)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (len - i >= 0)
	{
		if (str[len - i] != '0')
		{
			if ((i + 1) % 3 == 0)
			{
				arr[size - j] = malloc(sizeof(char) * 3);
				arr[size - j][0] = str[len - i];
				arr[size - j][1] = '0';
				arr[size - j][2] = '\0';
			}
			else if (i % 3 == 0 && ft_zerocheck(str, i, len))
			{
				arr[size - j] = ft_putpower(arr[size - j], 2);
				arr[size - ++j] = malloc(sizeof(char) * 2);
				arr[size - j][0] = str[len - i];
				arr[size - j][1] = '\0';
				if (size - ++j >= 0)
					arr[size - j] = ft_putpower(arr[size - j], i);
			}
			else
			{
				if (str[len - i - 1] != '1')
				{
					arr[size - j] = malloc(sizeof(char) * 2);
					arr[size - j][0] = str[len - i];
					arr[size - j][1] = '\0';
				}
				else
				{
					arr[size - j] = malloc(sizeof(char) * 3);
					arr[size - j][0] = '1';
					arr[size - j][1] = str[len - i++];
					arr[size - j][2] = '\0';
				}
			}
			j++;
		}
		else if (i % 3 == 0 && size - j >= 0 && ft_zerocheck(str, i, len))
		{
			arr[size - j] = ft_putpower(arr[size - j], i);
			j++;
		}
		i++;
	}
}

char	**ft_split(char *str)
{
	int		len;
	int		size;
	char	**arr;

	len = ft_strlen(str);
	size = ft_size(len, str);
	arr = malloc(sizeof(char *) * (size + 1));
	ft_arr_fill(str, arr, len, size);
	arr[size] = NULL;
	free(str);
	return (arr);
}
