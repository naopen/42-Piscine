/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:03:52 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/11 18:48:44 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_print_reverse_alphabet(void)
// {
// 	char	current_char;

// 	current_char = 'z';
// 	while (current_char >= 'a')
// 	{
// 		printf("%c", current_char);
// 		current_char--;
// 	}
// 	printf("\n");
// }

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }
