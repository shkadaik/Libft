GCC = gcc -Werror -Wextra -Wall -c

SRCS = *.c

INCLUDE = *.h

NAME = libft.a

all: $(NAME)

$(NAME): $(SRCS)
	$(GCC) $(SRCS)
	ar -rcs $(NAME) *.o
clean:
	rm -f *.o

fclean: clean
	rm $(NAME)

re: fclean all

.SILENT: $(NAME)
