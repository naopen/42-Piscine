/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:22:16 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/29 22:55:34 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// print_error: エラーをwriteで出力する関数
int	print_error(void)
{
	write(1, "map error\n", 10);
	return (1);
}

int	parse_charset(char *line, char *charset)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (line[i] >= '0' && line[i] <= '9')
		++i;
	while (counter < 3)
	{
		charset[counter] = line[i];
		++counter;
		++i;
	}
	if (line[i] != '\n')
		return (0);
	return (1);
}

//// parse_first_line: マップの1行目を解析し、行数とempty, obstacle, fullの文字を取得する関数
// 行数はheightに保存され、文字はcharsetに保存される
// mallocで確保した領域に1文字ずつ格納し、最後にft_atoiで数値に変換する
// 行数が0以下の場合と、文字が3文字以下の場合はエラーとして0を返す
int	parse_first_line(char *line, int *height, char *charset)
{
	int		i;
	int		counter;
	char	*tmp;

	i = 0;
	counter = 0;
	tmp = (char *)malloc(sizeof(char) * 17);
	tmp[0] = '\0';
	while (line[i] >= '0' && line[i] <= '9')
	{
		tmp[i] = line[i];
		++i;
	}
	tmp[i] = '\0';
	*height = ft_atoi(tmp);
	if (*height <= 0)
		return (0);
	return (parse_charset(line, charset));
}

int	parse_map_width(char *byte, int *width)
{
	while (byte[*width] != '\n')
		++(*width);
	++(*width);
	return (1);
}

int	parse_map_height(char **matrix, int height)
{
	int	p;

	p = 0;
	while (p < height)
	{
		matrix[p] = (char *)malloc(sizeof(char) * height);
		++p;
	}
	return (1);
}

int	parse_map_content(char **matrix, int height, int *width, char *charset)
{
	int	p;
	int	i;

	p = 1;
	while (p < height)
	{
		i = 0;
		read(0, matrix[p], *width);
		while (i < *width - 1)
		{
			if (matrix[p][i] != charset[0] && matrix[p][i] != charset[1])
				return (0);
			++i;
		}
		if (matrix[p][*width - 1] != '\n')
			return (0);
		++p;
	}
	return (1);
}

//// parse_map_from_stdin: ./bsqの後に入力されたマップファイルを読み込み、解析する関数
// parse_first_lineで解析した行数と文字を引数にマップを解析する
// matrixにはマップの文字列が格納され、widthにはマップの横幅が格納される
// マップの解析に失敗した場合はエラーとして0を返す
// check_square: 最大正方形の判定を行う関数
// max_square_in_pos: 最大正方形のサイズを返す関数
int	parse_map_from_stdin(char **matrix, int *width, int height, char *charset)
{
	int		p;
	char	*byte;

	p = 0;
	*width = 0;
	byte = (char *)malloc(sizeof(char) * 400);
	matrix = (char **)malloc(sizeof(char *) * height);
	if (matrix == (void *)0)
		return (0);
	read(0, byte, 400);
	if (!parse_map_width(byte, width))
		return (0);
	if (!parse_map_height(matrix, height))
		return (0);
	if (!parse_map_content(matrix, height, width, charset))
		return (0);
	free(byte);
	return (1);
}

void	handle_matrix(char **matrix, int width, int height, char *charset)
{
	draw_biggest_square(matrix, width, height, charset);
	print_matrix(matrix, width, height);
	free_matrix(matrix, height);
}

int	main(int argc, char **argv)
{
	char	**matrix;
	int		width;
	int		height;
	char	*charset;

	charset = (char *)malloc(sizeof(char) * 3);
	matrix = ((void *)0);
	width = 0;
	height = 0;
	if (argc == 1)
	{
		if (parse_map_from_stdin(matrix, &width, height, charset) == 0)
			return (print_error());
		return (0);
	}
	else
	{
		matrix = matrix_init_from_file(argv[1], charset, &width, &height);
		if (matrix == (void *)0)
			print_error();
		else
			handle_matrix(matrix, width, height, charset);
	}
	free(charset);
	return (0);
}
