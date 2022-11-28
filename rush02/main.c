/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 21:14:34 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/11/27 23:35:24 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		validate(char *string);
char	*ft_read(char *filename);
void	putstr(char *str);
char	*filter(char *str);
char	**ft_split(char *str);
int		ft_print(char ***dict, char **str);
char	***parse(char *str, int i, int count, int line);

void	input_error(void)
{
	putstr("Invalid Error");
}

int	argc_val(int argc, char **num, char **filename, char **argv)
{
	if (argc == 2)
	{
		*num = argv[1];
		*filename = "numbers.dict";
	}
	else if (argc == 3)
	{
		*num = argv[2];
		*filename = argv[1];
	}
	else
	{
		putstr("Input Error\n");
		return (0);
	}
	if (!validate(*num))
	{
		putstr("Input Error\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	*num;
	char	*filename;
	char	*str;
	char	**num_arr;
	char	***res;

	if (!argc_val(argc, &num, &filename, argv))
		return (0);
	str = ft_read(filename);
	if (!str)
	{
		printf("ERROR");
		return (0);
	}
	res = parse(str, 0, 0, 0);
	if (!res)
	{
		printf("ERROR");
		return (0);
	}
	num = filter(num);
	num_arr = ft_split(num);
	if (!ft_print(res, num_arr))
		printf("ERROR");
	return (0);
}
