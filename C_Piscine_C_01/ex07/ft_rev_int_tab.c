/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 05:07:37 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 05:38:56 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swp;

	i = 0;
	swp = 0;
	while (i < size / 2)
	{
		swp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swp;
		i++;
	}
}

// int	main(void)
// {
// 	int	x[10];
// 	int	i;

// 	i = 0;
// 	printf("before swap: ");
// 	while (i < 10)
// 	{
// 		x[i] = i;
// 		printf("%d, ", x[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_rev_int_tab(x, 10);
// 	i = 0;
// 	printf("after swap: ");
// 	while (i < 10)
// 	{
// 		printf("%d, ", x[i]);
// 		i++;
// 	}
// 	printf("\n");
// }
