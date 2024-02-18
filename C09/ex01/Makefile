LIB = libft.a
CC = cc
SDIR = ./srcs
CFLAGS = -Wall -Wextra -Werror
FILES = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
FILES_O = $(FILES:%.c=%.o)

all: $(LIB)

$(LIB): $(FILES_O)
	ar -rc $(LIB) $(FILES_O)

$(SDIR)/%.o: $(SDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I ./includes

clean:
	rm -f $(FILES_O)

fclean: clean
	rm -f $(LIB)

re: fclean all
