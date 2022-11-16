int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] < 97 || str[i] > 122)
			return (0);
	return (1);
}
