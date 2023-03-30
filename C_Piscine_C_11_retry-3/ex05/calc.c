/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 02:36:05 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/30 04:19:33 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	add(int x, int y)
{
	return (x + y);
}

int	sub(int x, int y)
{
	return (x - y);
}

int	multi(int x, int y)
{
	return (x * y);
}

int	div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	return (a / b);
}

int	mod(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (a % b);
}
