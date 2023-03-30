/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:07:52 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/19 18:18:08 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

// 文字を1文字標準出力に出力する関数
void	ft_putchar(char *c)
{
	write(1, c, 1);
}

// 引数の文字列を標準出力に出力する関数
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

//// print_solution: 問題の解答を標準出力に出力する関数
// row_index: 列のインデックス
// column_index: 行のインデックス
// c: 数字を一文字ずつ出力するための変数
// 行と列のインデックスがそれぞれ4未満の間ループを繰り返す
// 数字を一文字ずつ出力するために、数字を文字に変換する
// 数字を出力する
// 4文字目以外は半角スペースを出力する
// 行の出力が終わったら改行する
void	print_solution(int tab[4][4])
{
	int		row_index;
	int		column_index;
	char	c;

	row_index = 0;
	while (row_index < 4)
	{
		column_index = 0;
		while (column_index < 4)
		{
			c = tab[row_index][column_index] + '0';
			ft_putchar(&c);
			if (column_index != 3)
				ft_putchar(" ");
			column_index++;
		}
		ft_putchar("\n");
		row_index++;
	}
}
