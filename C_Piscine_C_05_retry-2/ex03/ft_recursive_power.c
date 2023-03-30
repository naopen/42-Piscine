/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 00:35:36 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/16 10:04:54 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
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
// 	result = ft_recursive_power(nb, power);
// 	printf("%dの%d乗は%dです。\n", nb, power, result);
// 	return (0);
// }
