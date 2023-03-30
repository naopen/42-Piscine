/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 03:50:32 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/29 04:25:59 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	if (tab == 0 || f == 0)
	{
		return (0);
	}
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) != 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	is_front_a(char *str)
// {
// 	return (str[0] == 'a');
// }

// // arr1にはaの含まれた文字列があるがarr2にはない
// char	*arr1[] = {"hello", "world", "abc", NULL};
// char	*arr2[] = {"def", "ghi", "jkl", NULL};

// int	main(void)
// {
// 	int	result1;
// 	int	result2;

// 	result1 = ft_any(arr1, &is_front_a);
// 	result2 = ft_any(arr2, &is_front_a);
// 	printf("%d\n", result1); // output: 1
// 	printf("%d\n", result2); // output: 0
// 	return (0);
// }
