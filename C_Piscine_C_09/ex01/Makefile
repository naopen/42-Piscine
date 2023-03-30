NAME = libft.a

SRC_DIR = srcs
INC_DIR = includes
OBJ_DIR = objs

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
INC = $(addprefix $(INC_DIR)/, ft.h)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) has been created!"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC)
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	@echo "Compiled $< successfully!"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Object files have been removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) has been removed!"

re: fclean all

.PHONY: all clean fclean re
