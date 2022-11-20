/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:26:55 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/20 15:56:23 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

void	norm_is_dumb(char **a, int *b, int *i)
{
*a = NULL;
	*b = 0;
	*i -= 1;
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		fi;
	char	*res;

	res = NULL;
	i = -1;
	fi = 0;
	if (!to_find[0])
		return (&str[0]);
	while (str[++i])
	{
		if (str[i] == to_find[fi] && fi++ && res == NULL)
			res = (&str[i]);
		else if (to_find[fi] == 0)
			return (res);
		else
			norm_is_dumb(&res, &fi, &i);
	}
	if (ft_strlen(to_find) > fi)
		return (NULL);
	else
		return (res);
}
/*
#include <stdio.h>
#include <string.h>
int main(){
	char str[] = "llo";
	char find[] = "";
//	char *null = NULL;

	char *res = ft_strstr(str, find);
	char *res2 = strstr(str, find);
	int i = -1;
	
	if(res2 != NULL){
		while(++i < 3)
			printf("%c", res2[i]);
		printf("\n");
	}else{
		printf("NULL\n");
	}
	i = -1;
	if(res != NULL){
		while(++i < 3)
			printf("%c", res[i]);
	}else{
		printf("NULL\n");
	}
	return 0;
}*/
