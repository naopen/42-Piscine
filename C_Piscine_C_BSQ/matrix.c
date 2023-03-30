/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:22:48 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/29 16:27:19 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

//draw_square: 与えられた座標とサイズをもとに、matrixの中身を書き換える関数
void	draw_square(char **matrix, char *charset, int x, int y, int size)
{
	int	i;
	int	j;

	j = y;
	while (j > y - size)
	{
		i = x;
		while (i > x - size)
		{
			matrix[j][i] = charset[2];
			--i;
		}
		--j;
	}
}

//check_square: 与えられた座標とサイズをもとに、matrixの中身をチェックする関数
int	check_square(char **matrix, char *charset, int i, int j, int x, int y)
{
	int	tmp;

	tmp = j;
	while (tmp <= y)
	{
		if (matrix[tmp][i] == charset[1])
			return (1);
		++tmp;
	}
	tmp = i;
	while (tmp <= x)
	{
		if (matrix[j][tmp] == charset[1])
			return (1);
		++tmp;
	}
	return (0);
}

//max_square_in_pos: 与えられた座標を左上とする正方形の最大サイズを返す関数
int	max_square_in_pos(char **matrix, int x, int y, char *charset)
{
	int	i;
	int	j;
	int	hit;

	if (matrix[y][x] != charset[0])
		return (0);
	i = x;
	j = y;
	hit = 0;
	while (i >= 0 && j >= 0 && hit == 0)
	{
		hit = check_square(matrix, charset, i, j, x, y);
		--j;
		--i;
	}
	if (hit != 1)
		return (x - i);
	return (x - i - 1);
}

//print_matrix: matrixの中身を標準出力に出力する関数
void	print_matrix(char **matrix, int width, int height)
{
	int	i;
	int	j;

	j = 0;
	while (j < height)
	{
		i = 0;
		while (i < width)
		{
			write(1, " ", 1);
			write(1, &matrix[j][i], 1);
			++i;
		}
		++j;
	}
}

int	get_max_square(char **matrix, int width, int height, char *charset, int *x,
		int *y)
{
	int	i;
	int	j;
	int	max;
	int	current_pos_size;

	j = 0;
	max = 0;
	while (j < height)
	{
		i = 0;
		while (i < width - 1)
		{
			current_pos_size = max_square_in_pos(matrix, i, j, charset);
			if (max < current_pos_size)
			{
				*x = i;
				*y = j;
				max = current_pos_size;
			}
			++i;
		}
		++j;
	}
	return (max);
}

//draw_biggest_square: matrixの中で最大の正方形を書き換える関数
void	draw_biggest_square(char **matrix, int width, int height, char *charset)
{
	int	x;
	int	y;
	int	max;

	max = 0;
	max = get_max_square(matrix, width, height, charset, &x, &y);
	draw_square(matrix, charset, x, y, max);
}
