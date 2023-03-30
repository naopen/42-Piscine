/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 00:48:05 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/16 09:07:51 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	sqrt;

	i = 1;
	sqrt = 0;
	while (nb > 0)
	{
		nb -= i;
		i += 2;
		sqrt++;
	}
	if (nb == 0)
	{
		return (sqrt);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	num;
// 	int	result;

// 	printf("整数を入力してください：");
// 	scanf("%d", &num);
// 	result = ft_sqrt(num);
// 	if (result == 0)
// 	{
// 		printf("%d の平方根はありません。\n", num);
// 	}
// 	else
// 	{
// 		printf("%d の平方根は %d です。\n", num, result);
// 	}
// 	return (0);
// }
