#include "libft.h"
#include <stdio.h>

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
	//##########>>> FT_MEMSET <<<##########
	void *s = "hwy";
	printf("value: %s\noutput: %s\n", argv[1], (char*)ft_memset(s, argv[1][0], 97));
}
