int	ft_len(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	nn;
	int	src_len;

	nn = n;
	src_len = ft_len(src);
	i = -1;
	while (++i < nn)
	{
		if (i < src_len)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
