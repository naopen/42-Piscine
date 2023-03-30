/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:17:55 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 04:21:46 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_line(int width, char left_c, char center_c, char right_c)
{
	int	j;

	j = 0;
	while (j < width)
	{
		if (j == 0)
			ft_putchar(left_c);
		else
		{
			if (j == width - 1)
				ft_putchar(right_c);
			else
				ft_putchar(center_c);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (i < y)
	{
		if (i == 0 || i == y - 1)
			draw_line(x, 'o', '-', 'o');
		else
			draw_line(x, '|', ' ', '|');
		i++;
	}
}
