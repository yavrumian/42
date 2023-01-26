NAME = libft.a

CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)



.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^


all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY: all clean fclean re