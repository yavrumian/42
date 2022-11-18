#include <stddef.h>

char *ft_strstr(char *str, char *to_find)
{
		int	i;
		int	fi;
		char	*res;

		res = NULL;
		i = -1;
		fi = 0;
		while (str[++i])
		{
			if (str[i] == to_find[fi])
			{
				if (res == NULL)
					res = &str[i];
				++fi;
			}
			else if (to_find[fi] == 0)
			{
				return res;
			}
			else
			{
				res = NULL;
				fi = 0;
			}
		}
			return res;
}

#include <stdio.h>
#include <string.h>
int main(){
	char str[] = "hello world";
	char find[] = "lda";
//	char *null = NULL;

	char *res = ft_strstr(str, find);
	char *res2 = strstr(str, find);
	int i = -1;
	
	if(res2 != NULL){
		while(++i < 3)
			printf("%c", res2[i]);
		printf("\n");
	}else{
		printf("NULL\n");
	}
	i = -1;
	if(res != NULL){
		while(++i < 3)
			printf("%c", res[i]);
	}else{
		printf("NULL\n");
	}
	return 0;
}
