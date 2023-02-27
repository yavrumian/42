#include "get_next_line.h"

int main(){
	int fd = open("test", O_RDONLY);

	int u = 0;
	char *str;
	while (++u <= 4){
		str = get_next_line(fd);
	printf("res: %s^\n", str);
	free(str);
	}
}