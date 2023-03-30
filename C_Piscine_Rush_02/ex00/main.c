/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:28:30 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/26 22:28:30 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define SIZE_BUFFER 1000000

void	ft_recursive(int nb, char *buffer);
int		ft_atoi(char *str);
int		ft_error(char *str, int fd, char *buffer);

int		g_dict_size = 0;

int	main(int argc, char **argv)
{
	int				fd;
	char			buffer[SIZE_BUFFER];
	unsigned int	n;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		fd = open("numbers.dict", O_RDONLY);
		g_dict_size = read(fd, buffer, SIZE_BUFFER);
		if (!ft_error(argv[1], fd, buffer))
			return (0);
		ft_recursive(n, buffer);
		close(fd);
	}
	else if (argc == 3)
	{
		n = ft_atoi(argv[2]);
		fd = open(argv[1], O_RDONLY);
		if (!ft_error(argv[2], fd, buffer))
			return (0);
		g_dict_size = read(fd, buffer, SIZE_BUFFER);
		ft_recursive(n, buffer);
		close(fd);
	}
}
