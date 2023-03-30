/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 03:23:58 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/29 03:33:35 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	result = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		result[i] = (*f)(tab[i]);
		i++;
	}
	return (result);
}

// #include <stdio.h>

// int	add_one(int num)
// {
// 	return (num + 1);
// }

// int	arr[] = {1, 2, 3, 4, 5};

// int	main(void)
// {
// 	int	*mapped_arr;
// 	int	i;

// 	mapped_arr = ft_map(arr, 5, add_one);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", mapped_arr[i]);
// 		i++;
// 	}
// 	// Output: 2 3 4 5 6
// 	free(mapped_arr);
// 	return (0);
// }
