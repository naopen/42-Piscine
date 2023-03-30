/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:52:27 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/11 19:00:44 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int a, int b, int c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a == '7' && b == '8' && c == '9')
	{
		return ;
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = '0';
	n2 = '1';
	n3 = '2';
	while (n1 < ('7' + 1))
	{
		while (n2 < ('8' + 1))
		{
			while (n3 < ('9' + 1))
			{
				if (n1 < n2 && n2 < n3)
				{
					ft_print(n1, n2, n3);
				}
				n3++;
			}
			n3 = '0';
			n2++;
		}
		n2 = '0';
		n1++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
