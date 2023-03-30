/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:36:51 by hakobaya          #+#    #+#             */
/*   Updated: 2023/03/11 15:46:57 by hakobaya         ###   ########.fr       */
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
		if (i == 0)
			draw_line(x, '/', '*', '\\');
		else if (i == y - 1)
			draw_line(x, '\\', '*', '/');
		else
			draw_line(x, '*', ' ', '*');
		i++;
	}
}
