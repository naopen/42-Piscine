/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 00:46:02 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/16 00:46:56 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1 || index == 2)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d番目のフィボナッチ数は%dです。\n", 0, ft_fibonacci(0));
// 	printf("%d番目のフィボナッチ数は%dです。\n", 1, ft_fibonacci(1));
// 	printf("%d番目のフィボナッチ数は%dです。\n", 2, ft_fibonacci(2));
// 	printf("%d番目のフィボナッチ数は%dです。\n", 3, ft_fibonacci(3));
// 	printf("%d番目のフィボナッチ数は%dです。\n", 4, ft_fibonacci(4));
// 	printf("%d番目のフィボナッチ数は%dです。\n", 5, ft_fibonacci(5));
// 	printf("%d番目のフィボナッチ数は%dです。\n", 6, ft_fibonacci(6));
// 	printf("%d番目のフィボナッチ数は%dです。\n", 7, ft_fibonacci(7));
// 	printf("%d番目のフィボナッチ数は%dです。\n", -1, ft_fibonacci(-1));
// 	return (0);
// }
