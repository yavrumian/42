NAME = lib.out
SRCS = $(wildcard *.c)
CC = cc
CFLAGS = -Wall -Wextra -Werror -c -g -fsanitize=address
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

clean:
		rm -rf *.o
fclean: clean
		rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re