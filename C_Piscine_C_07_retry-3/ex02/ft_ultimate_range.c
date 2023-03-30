/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:13:29 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/20 16:28:04 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
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
// 	len = ft_ultimate_range(&p, min, max);
// 	while (len > 0)
// 	{
// 		printf("%d\n", *p);
// 		p++;
// 		len--;
// 	}
// }
