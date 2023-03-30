# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tyoshie <tyoshie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 22:47:29 by nkannan           #+#    #+#              #
#    Updated: 2023/03/26 23:12:18 by tyoshie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SOURCES = main.c \
		  ft_recursive.c \
		  ft_atoi.c \
		  ft_utils.c \
		  ft_handling_errors.c \
		  ft_strings_man.c \
		  ft_check_dict.c
OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(SOURCES)
	$(CC) $(CFLAGS) -o $(NAME) $(SOURCES)

clean:
	$(RM) $(OBJECTS)

fclean:
	$(RM) $(NAME) $(OBJECTS)

re: fclean all

.PHONY: all clean fclean re