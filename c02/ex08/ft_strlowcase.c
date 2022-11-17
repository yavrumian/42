char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
	}
	return (str);
}
/*#include <unistd.h>
int main(){
	char a[] = "  alueux; cinquante+et+un";

	ft_strcapitalize(a);
	int i = -1;
	while(a[++i])
		write(1, &a[i], 1);
	return 0;
}*/
