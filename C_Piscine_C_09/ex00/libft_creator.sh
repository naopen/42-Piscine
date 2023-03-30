# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/22 03:47:15 by nkannan           #+#    #+#              #
#    Updated: 2023/03/22 10:49:41 by nkannan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

# ソースファイルのリスト
files="ft_putchar ft_swap ft_putstr ft_strlen ft_strcmp"

# オブジェクトファイルのリストを初期化
ofiles=""

# ソースファイルをコンパイルしてオブジェクトファイルを生成
for file in $files
do
	# 拡張子を除いたファイル名を取得
	name=$(basename $file)
	# コンパイルしてオブジェクトファイルを生成
	cc -Wall -Wextra -Werror -c $file.c -o $name.o
	# 生成したオブジェクトファイルをリストに追加
	ofiles="$ofiles $name.o"
done

# ライブラリを作成
ar rcs libft.a $ofiles

# 生成したオブジェクトファイルを削除
for file in $ofiles
do
	rm $file
done

# # 生成したライブラリを表示
# echo "libft.a created:"
# ls -l libft.a