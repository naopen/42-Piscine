/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutations_solver.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:38:36 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/19 18:46:01 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

// loop: 順列全探索する関数のループ部分
//// lines: 4つの行の順列を格納する配列
//// check_table: 4x4の表を格納する配列
//// permutations: 4つの要素を持つ24個の順列を格納する2次元配列
//// val: 16個の数字を格納する配列
void	loop(int lines[4], int check_table[4][4], int permutations[24][4],
		int val[16])
{
	while (lines[0]++, lines[0] < 24)
	{
		lines[1] = 0;
		while (lines[1]++, lines[1] < 24)
		{
			lines[2] = 0;
			while (lines[2]++, lines[2] < 24)
			{
				lines[3] = 0;
				while (lines[3]++, lines[3] < 24)
				{
					lines_to_array(check_table, permutations, lines);
					if (is_array_ready_to_run(check_table, val) == 1)
					{
						print_solution(check_table);
						return ;
					}
				}
			}
		}
	}
	ft_putstr("Error\n");
}

// solve: 16個の数字を受け取り、順列を全探索する関数
// val: 16個の数字を格納する配列
// permutations: 4つの要素を持つ24個の順列を格納する2次元配列
// check_table: 4x4の表を格納する配列
// lines_num: 4つの行の順列を格納する配列
void	solve(int val[16])
{
	int	permutations[24][4];
	int	check_table[4][4];
	int	lines_num[4];
	int	i_cur;

	i_cur = -1;
	while (i_cur++, i_cur < 4)
		lines_num[i_cur] = -1;
	get_permut(permutations);
	loop(lines_num, check_table, permutations, val);
}

// process_char: 受け取った入力の形式が正しいか確認しながら、配列に格納する関数
// cur: 現在の文字の位置
// argv: 入力された文字列
// val: 16個の数字を格納する配列
// 文字の位置が偶数の場合は数字を、奇数の場合は空白が入っているか確認する
// もし、入力の形式が正しくない場合は1を返す
int	process_char(int cur, char **argv, int val[16])
{
	if (cur > 31)
	{
		return (1);
	}
	if (cur % 2 == 0)
	{
		if (argv[1][cur] >= 48 && argv[1][cur] <= 57)
			val[cur / 2] = argv[1][cur] - 48;
		else
		{
			return (1);
		}
	}
	else
	{
		if (argv[1][cur] != ' ')
		{
			return (1);
		}
	}
	return (0);
}
