SRCS = ./srcs
CC = cc -Wall -Wextra -Werror
OBJ = ./srcs/operations.o ./srcs/do_op.o ./srcs/functions.o
NAME = do-op


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)
$(SRCS)/%.o: $(SRCS)/%.c
	$(CC) -c $< -o $@ -I ./includes
clean:
	-rm -f $(OBJ)
fclean: clean
	-rm -f $(NAME)
re: fclean all
