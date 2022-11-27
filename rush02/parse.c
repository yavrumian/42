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

void	norm(int *i, int *count, char *str)
{
	
	while (str[*i] == ' ' || str[*i] == '\t'
		|| str[*i] == '\v' || str[*i] == '\f')
		++(*i);
	*count = 0;
	while (str[*i] > 32 && str[*i] < 127)
	{
		++(*count);
		++(*i);
	}
}

char	***init(int *i, int *line, int *nol, char *str)
{
	char	***wrap;

	*i = 0;
	*nol = lines(str);
	*line = 0;
	wrap = (char ***)malloc(*nol * sizeof(char *));
	if (!wrap)
		return (NULL);
}

char	*norm2(int *count, char *str, int *i, char ***wrap)
{
	*count = 0;
	if (!(str[*i] >= '0' && str[*i] <= '9'))
		return (NULL);
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		++(*count);
		++(*i);
	}
	return ("");
}

char	*norm3(char **wrap, int count, int *i, char *str)
{
	wrap[0] = malloc(count + 1);
	if (!wrap[0])
		return (NULL);
	ft_strlcpy(wrap[0], &str[*i - count], count + 1);
	while (str[*i] == ' ' || str[*i] == '\t'
		|| str[*i] == '\v' || str[*i] == '\f')
		++(*i);
	if (str[(*i)++] != ':')
		return (NULL);
	return ("");
}

char	*norm4(char **wrap, int count, int i, char *str)
{
	wrap[1] = malloc(count + 1);
	if (!wrap[1])
		return (NULL);
	ft_strlcpy(wrap[1], &str[i - count], count + 1);
	if (str[i] != '\n')
		return (NULL);
	return ("");
}

char	***parse(char *str, int i, int count, int line)
{
	int		nol;
	char	***wrap;

	wrap = init(&i, &line, &nol, str);
	if (!wrap)
		return (NULL);
	while (str[i])
	{
		wrap[line] = (char **)malloc(2 * sizeof(char *));
		if (!wrap[line])
			return (NULL);
		while (str[i] != '\n')
		{
			if (!norm2(&count, str, &i, wrap)
				|| !norm3(wrap[line], count, &i, str))
				return (NULL);
			norm(&i, &count, str);
			if (!norm4(wrap[line], count, i, str))
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
	char ***res = parse(str, 0, 0, 0);
	if(!res){
		printf("ERROR");
		return 0;
	}

	while(++i < 41)
		printf("%s : %s\n", res[i][0], res[i][1]);
	return 0;
}
