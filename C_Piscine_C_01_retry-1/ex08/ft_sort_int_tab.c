/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 05:39:49 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 06:00:21 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

/* 値を入れ替える関数 */
void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int	x[10];
// 	int	i;

// 	i = 0;
// 	printf("before swap : ");
// 	while (i < 10)
// 	{
// 		x[i] = 0 + rand() % 100;
// 		printf("%d, ", x[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_sort_int_tab(x, 10);
// 	printf("after swap : ");
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%d, ", x[i]);
// 		i++;
// 	}
// 	printf("\n");
// }
