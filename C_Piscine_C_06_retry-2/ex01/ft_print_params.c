/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:38:05 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/15 14:30:04 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

// // Another Answer:
// int	main(int argc, char *argv[])
// {
// 	int	i;

// 	i = 1;
// 	while (i < argc)
// 	{
// 		write(1, argv[i], sizeof(argv[i] - 1));
// 		write(1, "\n", 1);
// 		i++;
// 	}
// 	return (0);
// }
