/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:15:01 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/12/07 16:15:02 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Invalid Input\n");
		return (0);
	}

	//##########>>> FT_ISALPHA <<<##########
	//printf("value: %c\noutput: %i\n", argv[1][0], ft_isalpha(argv[1][0]));
	//##########>>> FT_ISDIGIT <<<##########
	//printf("value: %c\noutput: %i\n", argv[1][0], ft_isdigit(argv[1][0]));
	//##########>>> FT_ISALNUM <<<##########
	//printf("value: %c\noutput: %i\n", argv[1][0], ft_isalnum(argv[1][0]));
	//##########>>> FT_ISASCII <<<##########
	//printf("value: %c\noutput: %i\n", argv[1][0], ft_isascii(argv[1][0]));
	//##########>>> FT_ISPRINT <<<##########
	//printf("value: %c\noutput: %i\n", argv[1][0], ft_isprint(argv[1][0]));
	//##########>>> FT_STRLEN <<<##########
	//printf("value: %s\noutput: %lu\n", argv[1], ft_strlen(argv[1]));
	//########## >> FT_MEMSET << ##########
	// char s[] = {42, 7, 145};
	// printf("value: %s\noutput: %s\n", argv[1], (char*)ft_memset(s, argv[1][0], 2));
	//########## >> FT_BZERO << ##########
	// char s[] = {'a', 'b', 'c'};
	// printf("value: %s\noutput: %s\n", argv[1], (char*)ft_bzero(s, 7));
	return 0;
}
