/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 03:39:29 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 03:58:33 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	i;
// 	int	j;
// 	int	ans_div;
// 	int	ans_mod;

// 	i = 42;
// 	j = 5;
// 	ft_div_mod(i, j, &ans_div, &ans_mod);
// 	printf("div: %d, mod: %d", ans_div, ans_mod);
// }
