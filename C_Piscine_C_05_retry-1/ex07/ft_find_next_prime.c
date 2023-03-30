/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 00:56:33 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/16 10:07:36 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 素数かどうかを判定する関数
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

// 次の素数を探す関数
int	ft_find_next_prime(int nb)
{
	int	next_prime;

	if (nb < 2)
		return (2);
	if (nb >= 2147483647)
		return (2147483647);
	next_prime = nb;
	while (1)
	{
		if (ft_is_prime(nb) == 1)
		{
			next_prime = nb;
			break ;
		}
		if (nb >= 2147483647)
		{
			next_prime = 2147483647;
			break ;
		}
		nb++;
	}
	return (next_prime);
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
