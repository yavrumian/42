int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!((str[i] >= 65 && str[i] <= 90)
				|| (str[i] >= 97 && str[i] <= 122)))
			return (0);
	return (1);
}
