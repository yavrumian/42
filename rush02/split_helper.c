#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_zerocheck(char *str, int pos, int len)
{
	int	i;

	i = -1;
	while (++i < 3 && str[len - i - pos])
	{
		if (str[len - i - pos] != '0')
			return (1);
	}
	return (0);
}

void	ft_size_main(int *i, int *size, int *len, char *str)
{
	*i = *len - 2;
	*size = (*len / 3) * 4 + (*len / 3) - 1;
	if (*len % 3 != 0)
		*size = *size + *len % 3 + 1;
	while (*i >= 0)
	{
		if (str[*i] == '1' && str[*i + 1] != '0')
			*size = *size - 1;
		*i -= 3;
	}
	*i = *len - 1;
}

int	ft_size(int len, char *str)
{
	int	size;
	int	i;

	ft_size_main(&i, &size, &len, str);
	while (i >= 0)
	{
		if (!ft_zerocheck(str, len - i, len) && (len - i) % 3 == 0)
		{
			if (len - i >= 3)
				size -= 3;
		}
		else if ((str[i] == '0') && ((len - i) % 3 == 0))
			size -= 2;
		else if (str[i] == '0')
			size--;
		i--;
	}
	return (size);
}

char	*ft_putpower(char *str, int size)
{
	int	i;

	i = 1;
	str = malloc(sizeof(char) * (size + 2));
	str[0] = '1';
	while (i <= size)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
