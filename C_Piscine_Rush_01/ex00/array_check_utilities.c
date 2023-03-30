/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_check_utilities.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:33:55 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/19 18:33:55 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

//// el_in_tab: 与えられた配列の中に重複があるかを判定する関数
// 与えられた配列の中に重複がある場合は1を返し、重複がない場合は0を返す
int	el_in_tab(int *row)
{
	int	cur;
	int	cur2;

	cur = 0;
	while (cur < 4)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			if (row[cur] == row[cur2] && cur != cur2)
				return (1);
			cur2++;
		}
		cur++;
	}
	return (0);
}

//// lines_to_array: lines_numで指定した行の順列をcheck_tableに格納する関数
// 1行目の場合は、permutations[lines_num[0]][0]、permutations[lines_num[0]][1]、
// permutations[lines_num[0]][2]、permutations[lines_num[0]][3]を取得する
// 以下同様
void	lines_to_array(int check_table[4][4], int permutations[24][4],
		int lines_num[4])
{
	int	cur;
	int	cur2;

	cur = 0;
	cur2 = 0;
	while (cur < 4)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			check_table[cur][cur2] = permutations[lines_num[cur]][cur2];
			cur2++;
		}
		cur++;
	}
}

//// get_cols: col_numで指定した列の要素をcol_tabに格納する関数
// 1列目の場合は、tab[0][0]、tab[1][0]、tab[2][0]、tab[3][0]を取得する
// 2列目の場合は、tab[0][1]、tab[1][1]、tab[2][1]、tab[3][1]を取得する
// 以下同様
void	get_cols(int col_tab[4], int tab[4][4], int col_num)
{
	col_tab[0] = tab[0][col_num];
	col_tab[1] = tab[1][col_num];
	col_tab[2] = tab[2][col_num];
	col_tab[3] = tab[3][col_num];
}
