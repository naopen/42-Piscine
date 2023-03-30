/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 00:51:53 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/16 10:05:28 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>

// int	main(void)
// {
// 	int	num;

// 	printf("整数を入力してください：");
// 	scanf("%d", &num);
// 	if (ft_is_prime(num))
// 	{
// 		printf("%d は素数です。\n", num);
// 	}
// 	else
// 	{
// 		printf("%d は素数ではありません。\n", num);
// 	}
// 	return (0);
// }
