NAME    = libftprintf.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
LIBFT   = libft/libft.a

SRCS    = ft_printf.c \
	  ft_printf_help.c \

OBJS    = $(SRCS:.c=.o)

all:    $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	make -C libft clean
	rm -f $(OBJS)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re