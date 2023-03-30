/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 02:44:16 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/27 12:45:35 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*x;
// 	int	*y;
// 	int	i;
// 	int	j;

// 	i = 2;
// 	j = 4;
// 	x = &i;
// 	y = &j;
// 	printf("Before swap: i:%d, j;%d\n", i, j);
// 	ft_swap(x, y);
// 	printf("After swap: i:%d, j;%d\n", i, j);
// }
