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
	//########## >> FT_ATOI << ##########
	// printf("value: %s\noutput: %i\n", argv[1], ft_atoi(argv[1]));
	//########## >> FT_STRNSTR << ##########
	// printf("value: %s\noutput: %s\n", argv[1], ft_strnstr("my test text.", argv[1], 2));
	//########## >> FT_MEMCPY << ##########
	// char d[] = {'a', 'f', 'c', 's', '\0'};
	// char s[] = {'a', 'b', 'c'};
	// printf("value: %s\noutput: %s\n", argv[1], (char*)ft_memcpy(d, s, 7));
	//########## >> FT_MEMCMP << ##########
	// unsigned int test1[] = {2, 1, 2};
	// unsigned int test2[] = {2, 1, 3};
	// printf("real value: %s\nreal output: %i\n", argv[1], memcmp(test1, test2, 3 * sizeof(int)));
	// printf("value: %s\noutput: %i\n", argv[1], ft_memcmp(test1, test2, 3 * sizeof(int)));
	//########## >> FT_MEMMOVE << ##########
	// unsigned char test1[] = "foo bar text";
	// unsigned char test2[] = "foo bar text";
	// (char*)memmove(&test1[2], &test1[2], 2);
	// (char*)ft_memmove(&test2[2], &test2[2], 2);
	// printf("real value: %s\nreal output: %s\n", argv[1], test1);
	// printf("value: %s\noutput: %s\n", argv[1], test2);


	return 0;
}
