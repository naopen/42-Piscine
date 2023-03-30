/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:28:27 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/26 22:28:27 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_div(unsigned int nb)
{
	if (nb / 1000000000 > 0)
		return (1000000000);
	else if (nb / 1000000 > 0)
		return (1000000);
	else if (nb / 1000 > 0)
		return (1000);
	else if (nb / 100 > 0)
		return (100);
	return (10);
}
