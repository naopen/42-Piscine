/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:05:30 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/11 18:48:39 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_print_alphabet(void)
// {
// 	char	current_char;

// 	current_char = 'a';
// 	while (current_char <= 'z')
// 	{
// 		printf("%c", current_char);
// 		current_char++;
// 	}
// 	printf("\n");
// }

#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
