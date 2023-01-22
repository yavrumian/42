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
	//########## >> FT_STRLCPY << ##########
	// char dst1[] = "";
	// char dst2[] = "";
	// int n = 0;
	// printf("value: %s\noriginal output: %zu\n", argv[1], strlcpy(dst1, argv[1], n));
	// printf("value: %s\noutput: %zu\n", argv[1], ft_strlcpy(dst2, argv[1], n));
	//########## >> FT_STRLCAT << ##########
	// char dst1[10] = "1234";
	// char dst2[10] = "1234";
	// int n = 10;
	// printf("value: %s\noriginal output: %zu\ndest: %s\n", argv[1], strlcat(dst1, argv[1], n), dst1);
	// printf("============\n");
	// printf("value: %s\noutput: %zu\ndest: %s\n", argv[1], ft_strlcat(dst2, argv[1], n), dst2);
	//########## >> FT_TOUPPER << ##########
	// printf("value: %s\noriginal output: %c\n", argv[1], (char)toupper(*argv[1]));
	// printf("============\n");
	// printf("value: %s\noutput: %c\n", argv[1], (char)ft_toupper(*argv[1]));
	//########## >> FT_TOLOWER << ##########
	// printf("value: %s\noriginal output: %c\n", argv[1], (char)tolower(*argv[1]));
	// printf("============\n");
	// printf("value: %s\noutput: %c\n", argv[1], (char)ft_tolower(*argv[1]));
	//########## >> FT_STRCHR << ##########
	// char *s = "lorem ipsum dolor sit amet";
	// printf("value: %s\noriginal output: %s\n", argv[1], strchr(s, *argv[1]));
	// printf("============\n");
	// printf("value: %s\noutput: %s\n", argv[1], ft_strchr(s, *argv[1]));
	//########## >> FT_STRRCHR << ##########
	// char *s = "qlorem ipsum dolor sit amet";
	// printf("value: %s\noriginal output: %s\n", argv[1], strrchr(s, *argv[1]));
	// printf("============\n");
	// printf("value: %s\noutput: %s\n", argv[1], ft_strrchr(s, *argv[1]));
	// ########## >> FT_STRNCMP << ##########
	// char *s = "test";
	// int n = 8;
	// printf("value: %s\noriginal output: %i\n", argv[1], strncmp(s, argv[1], n));
	// printf("============\n");
	// printf("value: %s\noutput: %i\n", argv[1], ft_strncmp(s, argv[1], n));
	// ########## >> FT_MEMCHR << ##########
	// char *s = "q lorem ipsum dolor sit amt";
	// int n = 15;
	// printf("value: %s\noriginal output: %s\n", argv[1], (char *)memchr(s, *argv[1], n));
	// printf("============\n");
	// printf("value: %s\noutput: %s\n", argv[1], (char *)ft_memchr(s, *argv[1], n));
	// ########## >> FT_CALLOC << ##########
	// int n = 1;
	// int b = 0;
	// printf("value: %s\noriginal output: %p\n", argv[1], calloc(n, b));
	// printf("============\n");
	// printf("value: %s\noutput: %p\n", argv[1], ft_calloc(n, b));
	// ########## >> FT_STRDUP << ##########
	// printf("value: %s\noriginal output: %s\n", argv[1], strdup(argv[1]));
	// printf("============\n");
	// printf("value: %s\noutput: %s\n", argv[1], ft_strdup(argv[1]));
	// // ########## >> FT_SUBSTR << ##########
	// int start = 49;
	// int len = 10;
	// printf("value: %s\noutput: %s\n", argv[1], ft_substr(argv[1], start, len));
	// // // ########## >> FT_STRTRIM << ##########
	// char set = ' ';
	// ft_strtrim(argv[1], set);
	// printf("value: %s\noutput:\n!%s!\n", argv[1], ft_strtrim(argv[1], &set));
	// // // ########## >> FT_SPLIT << ##########
	// char *set = "lorem ipsum dolor sit amet";
	// char *s = "     h e     y ";
	// (void)(argv);
	ft_split(argv[1], ' ');
	// printf("value: %s\n`output:%s!\n", argv[1], ft_strtrim(argv[1], set));
	return 0;
}
