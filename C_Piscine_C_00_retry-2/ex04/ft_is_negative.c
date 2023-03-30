/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:37:02 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/11 18:49:00 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_is_negative(int n)
// {
// 	if (n < 0)
// 	{
// 		printf("N");
// 	}
// 	else if (n >= 0)
// 	{
// 		printf("P");
// 	}
// }

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else if (n >= 0)
	{
		write(1, "P", 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(-1);
// 	return (0);
// }
