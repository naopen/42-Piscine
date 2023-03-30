/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 00:28:20 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/16 00:31:52 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	num;
// 	int	result;

// 	printf("階乗を求めたい数を入力してください: ");
// 	scanf("%d", &num);
// 	result = ft_recursive_factorial(num);
// 	if (result == 0)
// 	{
// 		printf("引数が無効です。\n");
// 	}
// 	else
// 	{
// 		printf("%dの階乗は%dです。\n", num, result);
// 	}
// 	return (0);
// }
