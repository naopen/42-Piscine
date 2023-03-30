/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutations_generator.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:34:13 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/19 18:34:14 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

// g_permutations: 24個のint配列(各配列は4つの要素を持つ)を格納する2次元配列
// g_cur_permut: 現在処理中の順列の番号を格納する変数
int		g_permutations[24][4];
int		g_cur_permut;

// 順列を追加する変数
void	add_permut(const int *values)
{
	g_permutations[g_cur_permut][0] = values[0];
	g_permutations[g_cur_permut][1] = values[1];
	g_permutations[g_cur_permut][2] = values[2];
	g_permutations[g_cur_permut][3] = values[3];
	g_cur_permut++;
}

// ヒープのアルゴリズムを使って順列を生成する関数
// 計算終了条件: 計算対象の要素数が1つの場合は、その要素自体が順列となる
// 計算対象の要素数が1つになるまで、再帰的にheap_permutを呼び出す
// 1つの要素を固定して、残りの要素を再帰的に計算する
// 要素数が奇数の場合は、先頭の要素と最後の要素を入れ替える
// 要素数が偶数の場合は、先頭の要素とi番目の要素を入れ替える
void	heap_permut(int values[], int size)
{
	int	i;

	if (size == 1)
		add_permut(values);
	else
	{
		i = 0;
		while (i < size)
		{
			heap_permut(values, size - 1);
			if (size % 2 == 1)
				ft_swap(&values[0], &values[size - 1]);
			else
				ft_swap(&values[i], &values[size - 1]);
			i++;
		}
	}
}

// get_permut: 順列を生成する関数
// 現在処理中の順列の番号を初期化し、ヒープのアルゴリズムを使って与えられた配列から順列を生成する
// 生成した順列を引数で渡された配列にコピーする
void	get_permut(int permutations[24][4])
{
	int	values[4];

	values[0] = 1;
	values[1] = 2;
	values[2] = 3;
	values[3] = 4;
	g_cur_permut = 0;
	heap_permut(values, 4);
	copy_array(permutations, g_permutations);
}
