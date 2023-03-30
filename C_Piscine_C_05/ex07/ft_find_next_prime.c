/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 00:56:33 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/16 09:07:14 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 素数かどうかを判定する関数
int	is_prime(int nb)
{
	int	i;

	if (nb < 2)
	{
		return (0);
	}
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// 次の素数を探す関数
int	ft_find_next_prime(int nb)
{
	if (nb >= 2147483647)
	{
		return (2147483647);
	}
	nb++;
	while (!is_prime(nb))
	{
		if (nb >= 2147483647)
		{
			return (2147483647);
		}
		nb++;
	}
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;
// 	int	next_prime;

// 	printf("整数を入力してください：");
// 	scanf("%d", &nb);
// 	next_prime = ft_find_next_prime(nb);
// 	if (next_prime == nb)
// 		printf("%dは素数です\n", nb);
// 	else
// 		printf("%dより大きい次の素数は%dです\n", nb, next_prime);
// 	return (0);
// }
