/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:33:34 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/30 21:33:00 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *n_size, int n)
{
	int		i;
	char	c;

	i = 0;
	while (++i < n)
		if (n_size[i - 1] >= n_size[i])
			return ;
	i = -1;
	while (++i < n)
	{
		c = n_size[i] + 48;
		ft_putchar(c);
	}
	if (n_size[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	n_size[9];

	if (n >= 10 || n <= 0)
		return ;
	i = -1;
	while (++i < n)
		n_size[i] = i;
	while (n_size[0] <= (10 - n) && n >= 1)
	{
		ft_print(n_size, n);
		if (n == 10)
			break ;
		n_size[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (n_size[i] > 9)
			{
				n_size[i - 1]++;
				n_size[i] = 0;
			}
		}
	}
}

// int	main(void)
// {
// 	ft_print_combn(2);
// 	return (0);
// }
