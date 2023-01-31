NAME = libft.a

CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re