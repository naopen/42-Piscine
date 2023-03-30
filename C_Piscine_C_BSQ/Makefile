# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmatsush <rmatsush@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 11:21:54 by nkannan           #+#    #+#              #
#    Updated: 2023/03/29 23:05:05 by rmatsush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = bsq
FLAGS = -Wall -Wextra -Werror
SRC = main.c file_utils.c matrix.c
OBJ = main.o file_utils.o matrix.o
all: $(NAME)
RM=/bin/rm -f
$(NAME) : $(SRC)
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
