#define BUFFER_SIZE 10
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>


char *get_next_line(int fd)
{
    static char *buff;
    char *chunk;
    int size;

    chunk = malloc(BUFFER_SIZE+1);

    size = read(fd, chunk, BUFFER_SIZE);
    chunk[BUFFER_SIZE] = '\0';
    printf("%s", chunk);
    return NULL;
}

int main(){
    int fd = open("test.txt", O_RDONLY);
    get_next_line(fd);
    return 0;
}