/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:13:10 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/11 18:48:59 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_print_numbers(void)
// {
// 	int	n;

// 	n = 0;
// 	while (n < 10)
// 	{
// 		printf("%d", n);
// 		n++;
// 	}
// }

#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
