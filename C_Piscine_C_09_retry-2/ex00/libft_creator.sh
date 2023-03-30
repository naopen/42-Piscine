# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/22 03:47:15 by nkannan           #+#    #+#              #
#    Updated: 2023/03/27 08:20:06 by nkannan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

files="ft_putchar ft_swap ft_putstr ft_strlen ft_strcmp"

ofiles=""

for file in $files
do
	name=$(basename $file)
	cc -Wall -Wextra -Werror -c $file.c -o $name.o
	ofiles="$ofiles $name.o"
done

ar rcs libft.a $ofiles

for file in $ofiles
do
	rm $file
done
