/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:29:46 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/16 02:02:07 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BOARD_SIZE 10

void	ft_putnbr(int n)
{
	char	c;

	c = n % 10 + '0';
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	write(1, &c, 1);
}

void	ft_print_board(int board[BOARD_SIZE])
{
	char	c;
	int		i;

	i = 0;
	while (i < BOARD_SIZE)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_check_position(int board[BOARD_SIZE], int row, int col)
{
	int	i;
	int	a;
	int	b;
	int	diff_row;
	int	diff_col;

	i = 0;
	a = 0;
	b = 0;
	while (i < col)
	{
		diff_row = board[i] - row;
		diff_col = i - col;
		if (board[i] == row || (diff_row == diff_col || diff_row == -diff_col))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_solve(int board[BOARD_SIZE], int col, int *count)
{
	int	result;
	int	i;

	if (col == BOARD_SIZE)
	{
		++(*count);
		ft_print_board(board);
		return (1);
	}
	result = 0;
	i = 0;
	while (i < BOARD_SIZE)
	{
		if (ft_check_position(board, i, col))
		{
			board[col] = i;
			result += ft_solve(board, col + 1, count);
		}
		i++;
	}
	return (result);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[BOARD_SIZE];
	int	count;
	int	i;

	i = 0;
	while (i < BOARD_SIZE)
	{
		board[i] = 0;
		i++;
	}
	count = 0;
	ft_solve(board, 0, &count);
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		count;
// 	char	buf[64];
// 	int		len;

// 	count = ft_ten_queens_puzzle();
// 	len = sprintf(buf, "%d\n", count);
// 	write(1, buf, len);
// 	return (0);
// }
