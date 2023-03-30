/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:35:40 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/21 21:35:52 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_putstr(par->copy);
		ft_putchar('\n');
		++par;
	}
}

// #include <stdlib.h>

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// char	*ft_strdup(char *src)
// {
// 	char	*dest;
// 	int		i;
// 	int		len;

// 	i = 0;
// 	len = ft_strlen(src);
// 	dest = (char *)malloc(sizeof(char) * (len + 1));
// 	if (dest == NULL)
// 		return (NULL);
// 	while (i < len)
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
// 	int			i;
// 	t_stock_str	*arr;

// 	i = 0;
// 	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
// 	if (arr == NULL)
// 		return (NULL);
// 	while (i < ac)
// 	{
// 		arr[i].size = ft_strlen(av[i]);
// 		arr[i].str = av[i];
// 		arr[i].copy = ft_strdup(av[i]);
// 		if (arr[i].copy == NULL)
// 			return (NULL);
// 		i++;
// 	}
// 	arr[i].str = 0;
// 	return (arr);
// }

// int	main(int argc, char **argv)
// {
// 	t_stock_str	*arr;

// 	arr = ft_strs_to_tab(argc, argv);
// 	ft_show_tab(arr);
// 	free(arr);
// 	return (0);
// }
