/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:59:23 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/21 21:37:30 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	i = 0;
	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		if (arr[i].copy == NULL)
			return (NULL);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}

// #include <stdio.h>
// #include <stdlib.h>

// char				*strs[4] = {"hello", "42world", "We Can Do It", NULL};

// int	main(void)
// {
// 	t_stock_str	*arr;
// 	int			i;

// 	arr = ft_strs_to_tab(3, strs);
// 	if (!arr)
// 		return (printf("Error: memory allocation failed\n"));
// 	i = 0;
// 	while (i < 3)
// 	{
// 		printf("String %d:\n", i);
// 		printf("\tSize: %d\n", arr[i].size);
// 		printf("\tString: %s\n", arr[i].str);
// 		printf("\tCopy: %s\n", arr[i].copy);
// 		++i;
// 	}
// 	free(arr);
// 	return (0);
// }
