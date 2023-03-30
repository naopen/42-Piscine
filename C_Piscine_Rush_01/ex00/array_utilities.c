/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_utilities.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:35:33 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/19 18:35:34 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// aとbの値を入れ替える関数
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// 配列の要素を逆順に並び替える関数
void	ft_rev_int_tab(int *tab, int size)
{
	int	cur;
	int	t;

	cur = 0;
	while (cur < size / 2)
	{
		t = tab[cur];
		tab[cur] = tab[size - 1 - cur];
		tab[size - 1 - cur] = t;
		cur++;
	}
}

// sourceからdestに配列の要素をコピーする関数

// column_idx: 行のインデックス
// row_idx: 列のインデックス
void	copy_array(int dest[24][4], int src[24][4])
{
	int	column_idx;
	int	row_idx;

	column_idx = 0;
	while (column_idx < 24)
	{
		row_idx = 0;
		while (row_idx < 4)
		{
			dest[column_idx][row_idx] = src[column_idx][row_idx];
			row_idx++;
		}
		column_idx++;
	}
}
