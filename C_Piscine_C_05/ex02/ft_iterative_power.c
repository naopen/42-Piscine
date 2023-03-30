/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 00:32:58 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/16 00:55:10 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		result = 1;
		while (power > 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;
// 	int	power;
// 	int	result;

// 	printf("整数を入力してください：");
// 	scanf("%d", &nb);
// 	printf("べき乗の値を入力してください：");
// 	scanf("%d", &power);
// 	result = ft_iterative_power(nb, power);
// 	printf("%dの%d乗は%dです。\n", nb, power, result);
// 	return (0);
// }
