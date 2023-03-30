/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 04:19:40 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/29 04:24:25 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted_increasing;
	int	sorted_decreasing;

	sorted_increasing = 1;
	sorted_decreasing = 1;
	if (length <= 1)
		return (1);
	i = 0;
	while (i < length - 1 && sorted_increasing)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			sorted_increasing = 0;
		i++;
	}
	i = 0;
	while (i < length - 1 && sorted_decreasing)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			sorted_decreasing = 0;
		i++;
	}
	return (sorted_increasing || sorted_decreasing);
}

// #include <stdio.h>

// int	ascending(int a, int b)
// {
// 	return (a - b);
// }

// int	arr1[] = {1, 2, 3, 4, 5};
// int	arr2[] = {5, 4, 3, 2, 1};
// int	arr3[] = {1, 3, 2, 4, 5};

// int	main(void)
// {
// 	if (ft_is_sort(arr1, 5, ascending))
// 		printf("arr1はソートされています\n");
// 	else
// 		printf("arr1はソートされていません\n");
// 	if (ft_is_sort(arr2, 5, ascending))
// 		printf("arr2はソートされています\n");
// 	else
// 		printf("arr2はソートされていません\n");
// 	if (ft_is_sort(arr3, 5, ascending))
// 		printf("arr3はソートされています\n");
// 	else
// 		printf("arr3はソートされていません\n");
// 	return (0);
// }
