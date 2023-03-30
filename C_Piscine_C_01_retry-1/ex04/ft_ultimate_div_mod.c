/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 03:59:05 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 04:10:32 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	ans_div;
	int	ans_mod;

	ans_div = *a / *b;
	ans_mod = *a % *b;
	*a = ans_div;
	*b = ans_mod;
}

// int	main(void)
// {
// 	int	i;
// 	int	j;

// 	i = 42;
// 	j = 8;
// 	ft_ultimate_div_mod(&i, &j);
// 	printf("div: %d, mod: %d", i, j);
// }
