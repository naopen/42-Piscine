/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 07:59:57 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/10 08:13:42 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		while (argv[argc - 1][i])
		{
			write(1, &argv[argc -1][i++], 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
