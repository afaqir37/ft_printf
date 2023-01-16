CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_printf_chars.c ft_printf_hexa.c ft_printf_nums.c
NAME = libftprintf.a
RM = rm -rf

all : $(NAME)

$(NAME) : $(SRC:.c=.o)
	ar -rc libftprintf.a $^

clean :
	$(RM) $(SRC:.c=.o)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
