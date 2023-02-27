NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS = ft_printf.c 

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	make -C libft
	$(AR) $(NAME) $(OBJS) ./libft/*.o

all: $(NAME)

clean:

	$(RM) $(OBJS)



fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
