#include "ft_printf.h"
#include <stdio.h>
int main(){

	//printf("\n$%i\n", ft_printf(" %p %p ", LONG_MIN, LONG_MAX) == printf(" %p %p ", LONG_MIN, LONG_MAX));
	int i = printf("%s ", "");
	int d = ft_printf("%s ", "");

	// printf("%d,%d", i, d);

	// ft_printf(" NULL %s NULL ", NULL);

	return 0;
}