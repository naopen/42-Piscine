/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:34:00 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/19 18:34:00 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

////// check: 与えられた配列の中に指定した値がいくつあるかを判定する関数
//// row: 与えられた配列
//// val: 調べたい個数
// stock: 一時的に配列の要素を格納する変数
// cur: 与えられた配列の中に指定した値がいくつあるかをカウントする変数
// num: 与えられた配列の要素を順番に参照するための変数
// valで指定した値と同じ個数あり、かつ、与えられた配列に重複がない(=el_in_tabが0)場合は1を返す
int	check(int *row, int val)
{
	int	stock;
	int	cur;
	int	num;

	stock = row[0];
	cur = 1;
	num = 1;
	while (num < 4)
	{
		if (row[num] > stock)
		{
			cur++;
			stock = row[num];
		}
		num++;
	}
	if (cur == val && el_in_tab(row) == 0)
		return (1);
	else
		return (0);
}

// check_reverse: 与えられた配列を逆順にしてcheck関数を実行する関数
int	check_reverse(int *row, int val)
{
	int	ret;

	ft_rev_int_tab(row, 4);
	ret = check(row, val);
	ft_rev_int_tab(row, 4);
	return (ret);
}

// check_rows: 与えられた配列の行についてcheck関数とcheck_reverse関数を実行する関数
// tab: 与えられた配列
// val: 調べたい個数
// この関数は、check関数とcheck_reverse関数の両方が1を返す場合にのみ1を返す
int	check_rows(int tab[4][4], int *val)
{
	if (check(tab[0], val[8]) == 0 || check_reverse(tab[0], val[12]) == 0)
		return (0);
	if (check(tab[1], val[9]) == 0 || check_reverse(tab[1], val[13]) == 0)
		return (0);
	if (check(tab[2], val[10]) == 0 || check_reverse(tab[2], val[14]) == 0)
		return (0);
	if (check(tab[3], val[11]) == 0 || check_reverse(tab[3], val[15]) == 0)
		return (0);
	return (1);
}

// check_cols: 与えられた配列の列についてcheck関数とcheck_reverse関数を実行する関数
// tab: 与えられた配列
// val: 調べたい個数
// この関数は、check関数とcheck_reverse関数の両方が1を返す場合にのみ1を返す
int	check_cols(int tab[4][4], int *val)
{
	int	test_tab[4];

	get_cols(test_tab, tab, 0);
	if (check(test_tab, val[0]) == 0 || check_reverse(test_tab, val[4]) == 0)
		return (0);
	get_cols(test_tab, tab, 1);
	if (check(test_tab, val[1]) == 0 || check_reverse(test_tab, val[5]) == 0)
		return (0);
	get_cols(test_tab, tab, 2);
	if (check(test_tab, val[2]) == 0 || check_reverse(test_tab, val[6]) == 0)
		return (0);
	get_cols(test_tab, tab, 3);
	if (check(test_tab, val[3]) == 0 || check_reverse(test_tab, val[7]) == 0)
		return (0);
	return (1);
}

// is_array_ready_to_run: 配列が問題を解くために準備ができているかどうかを判定する関数
// tab: 与えられた配列
// val: 調べたい個数
// この関数は、check_rows関数とcheck_cols関数の両方が1を返した場合に1を返す
int	is_array_ready_to_run(int tab[4][4], int *val)
{
	if (check_rows(tab, val) == 0 || check_cols(tab, val) == 0)
		return (0);
	return (1);
}
