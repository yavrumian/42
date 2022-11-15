int	ft_ultimate_div_mod(int *a, int *b)
{
	int aa = *a;
	*a = *a / *b;
	*b = aa % *b;
}
