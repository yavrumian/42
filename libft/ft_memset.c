#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	int *x = (int*)s;

	i = 0;
	while (i < n)
		x[i] = c;
	return (s);
}