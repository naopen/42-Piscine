/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:40:38 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/20 15:58:40 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	size = max - min;
	if (size <= 0)
		return (NULL);
	arr = (int *)malloc(size * sizeof(int));
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*p;
// 	int	len;
// 	int	max;
// 	int	min;

// 	max = 20;
// 	min = -20;
// 	p = ft_range(min, max);
// 	len = max - min;
// 	while (len > 0)
// 	{
// 		printf("%d\n", *p);
// 		p++;
// 		len--;
// 	}
// }
