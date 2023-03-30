NAME = do-op

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = calc.c do-op.c ft_atoi.c ft_utils.c ft_putnbr.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

test: re
	./do-op
	./do-op 1 + 1
	./do-op 42amis - -20toto12
	./do-op 1 p 1
	./do-op 1 + toto3
	./do-op toto3 + 4
	./do-op foo plus bar
	./do-op 25 / 0
	./do-op 25 % 0
	./do-op 25 / f
	./do-op 25 ++ "+1"
	./do-op 25 + "+1"
