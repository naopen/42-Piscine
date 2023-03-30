/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:45:17 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/19 18:14:06 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>

//------------------------------------------------
//  プロトタイプ宣言(Prototype declaration)
//------------------------------------------------

void	ft_putchar(char *chr);
void	ft_putstr(char *str);

void	ft_swap(int *a, int *b);
void	ft_rev_int_tab(int *tab, int size);

int		el_in_tab(int *row);
void	get_cols(int col_tab[4], int tab[4][4], int col_num);
void	lines_to_array(int check_table[4][4], int permutations[24][4],
			int lines_num[4]);

void	print_solution(int tab[4][4]);
void	copy_array(int dest[24][4], int src[24][4]);

void	add_permut(const int *values);
void	get_permut(int permutations[24][4]);
void	heap_permut(int c[], int n);

int		check(int *row, int val);
int		check_reverse(int *row, int val);

int		check_rows(int tab[4][4], int *val);
int		check_cols(int tab[4][4], int *val);
int		is_array_ready_to_run(int tab[4][4], int *val);

void	loop(int lines[4], int check_table[4][4], int permutations[24][4],
			int val[16]);
void	solve(int val[16]);
int		process_char(int cur, char **argv, int val[16]);

int		check_argc(int argc);
int		check_argv(char **argv, int *matrix);

#endif
