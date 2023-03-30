/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 02:32:09 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/30 07:16:23 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	get_op_index(char op)
{
	if (op == '+')
	{
		return (0);
	}
	else if (op == '-')
	{
		return (1);
	}
	else if (op == '*')
	{
		return (2);
	}
	else if (op == '/')
	{
		return (3);
	}
	else if (op == '%')
	{
		return (4);
	}
	else
	{
		return (-1);
	}
}

int	(*g_op_functions[5])(int, int) = {&add, &sub, &multi, &div, &mod};

int	main(int argc, char **argv)
{
	int		val1;
	int		val2;
	char	op;
	int		error;

	error = 0;
	if (argc != 4)
		return (0);
	val1 = ft_atoi(argv[1]);
	val2 = ft_atoi(argv[3]);
	if (val2 == 0 && (argv[3][0] >= '0' && argv[3][0] <= '9'))
		error = 1;
	op = argv[2][0];
	if (op == '+')
		return (print_result(add(val1, val2), error));
	if (op == '-')
		return (print_result(sub(val1, val2), error));
	if (op == '*')
		return (print_result(multi(val1, val2), error));
	if (op == '/' && (argv[3][0] >= '0' && argv[3][0] <= '9'))
		return (print_result(div(val1, val2), error));
	if (op == '%' && (argv[3][0] >= '0' && argv[3][0] <= '9'))
		return (print_result(mod(val1, val2), error));
	return (print_result(0, 0));
}
