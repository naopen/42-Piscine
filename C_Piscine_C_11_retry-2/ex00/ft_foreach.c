/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:27:01 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/29 04:26:32 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// #include <stdio.h>

// void	ft_putnbr(int n)
// {
// 	printf("%d\n", n);
// }

// int		arr[] = {1, 2, 3, 4, 5};

// int	main(void)
// {
// 	int	len;

// 	len = sizeof(arr) / sizeof(int);
// 	ft_foreach(arr, len, &ft_putnbr);
// 	return (0);
// }
