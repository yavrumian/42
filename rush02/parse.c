/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 02:15:23 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/27 23:37:32 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_read(char *filename);
char	*norm2(int *count, char *str, int *i, char ***wrap);
char	*norm3(char **wrap, int count, int *i, char *str);
char	*norm4(char **wrap, int count, int i, char *str);
void	norm(int *i, int *count, char *str);
char	***init(int *i, int *line, int *nol, char *str);
char	*search(char ***tab, char *find);
int		ft_print(char ***dict, char **str);

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
	wrap[nol] = NULL;
	free(str);
	return (wrap);
}


