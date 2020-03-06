NAME = libft.a

all:$(NAME)

$(NAME): *.c
	gcc -Wall -Wextra -Werror -c *.c
	ar rc $(NAME) *.o
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -rf $(NAME)
re:fclean all
