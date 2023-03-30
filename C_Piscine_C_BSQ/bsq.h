/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/03/29 16:56:05 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/29 16:56:05 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

// ファイル関連のヘッダファイル
int	ft_atoi(char *str);
void	free_matrix(char **matrix, int height);
char	**alloc_matrix(int fd, int *line_length, int *line_nbr);
char	**matrix_init_from_file(char *filepath, char *charset, int *width,
			int *height);

// マップチェック関連のヘッダファイル
void	draw_square(char **matrix, char *charset, int x, int y, int size);
int	check_square(char **matrix, char *charset, int i, int j, int x, int y);
int	max_square_in_pos(char **matrix, int x, int y, char *charset);
void	print_matrix(char **matrix, int width, int height);
void	draw_biggest_square(char **matrix, int width, int height,
			char *charset);

#endif
