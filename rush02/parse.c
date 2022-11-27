/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 02:15:23 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/27 14:01:25 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_read(char *filename);
char	*ft_strlcpy(char *dest, char *src, unsigned int n);

int	lines(char *str)
{
	int	i;
	int	line;

	line = 0;
	i = -1;
	while (str[++i])
		if (str[i] == '\n')
			++line;
	return (line);
}

char	***parse(char *str)
{
	int		i;
	int		nol;
	int		line;
	int		count;
	char	***wrap;

	nol = lines(str);
	wrap = (char ***)malloc(nol * sizeof(char *));
	if (!wrap)
		return (NULL);
	i = 0;
	line = 0;
	while (str[i])
	{
		wrap[line] = (char **)malloc(2 * sizeof(char *));
		if (!wrap[line])
			return (NULL);
		while (str[i] != '\n')
		{
			count = 0;
			if (!(str[i] >= '0' && str[i] <= '9'))
				return (NULL);
			while (str[i] >= '0' && str[i] <= '9')
			{
				++count;
				++i;
			}
			wrap[line][0] = malloc(count + 1);
			if (!wrap[line][0])
				return (NULL);
			ft_strlcpy(wrap[line][0], &str[i - count], count + 1);
			while (str[i] == ' ' || str[i] == '\t'
				|| str[i] == '\v' || str[i] == '\f')
				++i;
			if (str[i] == ':')
				++i;
			else
				return (NULL);
			while (str[i] == ' ' || str[i] == '\t'
				|| str[i] == '\v' || str[i] == '\f')
				++i;
			count = 0;
			while (str[i] > 32 && str[i] < 127)
			{
				++count;
				++i;
			}
			wrap[line][1] = malloc(count + 1);
			if (!wrap[line][1])
				return (NULL);
			ft_strlcpy(wrap[line][1], &str[i - count], count + 1);
			if (str[i] != '\n')
				return (NULL);
		}
		++line;
		++i;
	}
	return (wrap);
}

int main()
{
	char *str = ft_read("numbers.dict");
	int i = -1;
	if(!str){
		printf("ERROR");
		return 0;
	}
	char ***res = parse(str);
	if(!res){
		printf("ERROR");
		return 0;
	}

	while(++i < 41)
		printf("%s : %s\n", res[i][0], res[i][1]);
	return 0;
}
