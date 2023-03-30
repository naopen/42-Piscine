/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:22:03 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/29 23:14:39 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// ft_atoi: 文字列を数値に変換する関数
int	ft_atoi(char *str)
{
	int	nbr;
	int	i;

	nbr = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - '0';
		++i;
	}
	return (nbr);
}

//add_char_to_end: 文字列の末尾に文字を追加する関数
void	add_char_to_end(char *str, char chr)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	str[i] = chr;
	str[i + 1] = '\0';
}

// matrixのメモリを解放する関数
void	free_matrix(char **matrix, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(matrix[i]);
		++i;
	}
	free(matrix);
}

// alloc_matrix: ファイルから行数と列数を取得し、その行数と列数の行列をmallocで確保する関数
char	**alloc_matrix(int fd, int *line_length, int *line_nbr)
{
	char	byte;
	char	**matrix;
	int		p;
	char	*str;

	p = 0;
	str = (char *)malloc(sizeof(char) * 11);
	matrix = ((void *)0);
	read(fd, &byte, 1);
	while (byte >= '0' && byte <= '9')
	{
		add_char_to_end(str, byte);
		read(fd, &byte, 1);
	}
	*line_nbr = ft_atoi(str);
	if (*line_nbr > 0)
	{
		matrix = (char **)malloc(sizeof(char *) * *line_nbr);
		while (byte != '\n')
			read(fd, &byte, 1);
		read(fd, &byte, 1);
		while (byte != '\n')
		{
			++(*line_length);
			read(fd, &byte, 1);
		}
		while (p < *line_nbr)
		{
			matrix[p] = (char *)malloc(sizeof(char) * *line_length);
			++p;
		}
		return (matrix);
	}
	else
		return (matrix);
}

// copy_file_to_matrix: ファイルから行列を読み込む関数　のコピー部分
int	copy_file_to_matrix(int fd, char **matrix, char *charset, int *wh)
{
	char	byte;
	int		line_counter;
	int		column_counter;

	read(fd, &byte, 1);
	while (byte >= '0' && byte <= '9')
		read(fd, &byte, 1);
	column_counter = 0;
	while (byte != '\n' && column_counter < 3)
	{
		charset[column_counter] = byte;
		read(fd, &byte, 1);
		++column_counter;
	}
	line_counter = 0;
	while (line_counter < wh[1])
	{
		column_counter = 0;
		while (column_counter < wh[0])
		{
			read(fd, &byte, 1);
			matrix[line_counter][column_counter] = byte;
			++column_counter;
		}
		++line_counter;
	}
	return (1);
}

// matrix_init_from_file: ファイルから行列を読み込む関数
char	**matrix_init_from_file(char *filepath, char *charset, int *width,
		int *height)
{
	int		fd;
	char	**matrix;
	int		wh[2];

	fd = open(filepath, O_RDONLY);
	*width = 1;
	if (fd < 0)
		return ((void *)0);
	matrix = alloc_matrix(fd, width, height);
	if (matrix == (void *)0)
		return (matrix);
	close(fd);
	fd = open(filepath, O_RDONLY);
	wh[0] = *width;
	wh[1] = *height;
	if (copy_file_to_matrix(fd, matrix, charset, wh) == 0)
	{
		close(fd);
		free_matrix(matrix, *height);
		return ((void *)0);
	}
	close(fd);
	return (matrix);
}
