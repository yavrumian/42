int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] < 65 || str[i] > 90)
			return (0);
	return (1);
}
