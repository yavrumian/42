int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] < 48 || str[i] > 57)
			return (0);
	return (1);
}
