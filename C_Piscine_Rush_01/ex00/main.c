/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:40:20 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/19 18:46:19 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

// matrix: 引数で与えられた文字列を数値に変換して格納する配列
// check_argc: 引数の数をチェックする関数
// check_argv: 引数の形式をチェックする関数
// solve: 問題を解く関数

int	main(int argc, char **argv)
{
	int	matrix[16];

	if (check_argc(argc))
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (check_argv(argv, matrix))
	{
		ft_putstr("Error\n");
		return (0);
	}
	solve(matrix);
}
