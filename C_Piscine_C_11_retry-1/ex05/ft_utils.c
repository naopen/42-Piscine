/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 04:11:07 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/30 06:21:01 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	print_result(int result, int error)
{
	if (result == 0 && error == 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	else if (error == 1)
		return (0);
	else
	{
		ft_putnbr(result);
		write(1, "\n", 1);
		return (0);
	}
}
