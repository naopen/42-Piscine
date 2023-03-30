/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 03:57:28 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/29 04:18:28 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	count;

	count = 0;
	while (length > 0 && *tab != 0)
	{
		if (f(*tab) != 0)
			count++;
		tab++;
		length--;
	}
	return (count);
}

// #include <stdio.h>

// int	is_front_A(char *str)
// {
// 	return (*str == 'A');
// }

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d\n", ft_count_if(argv, 5, is_front_A));
// 	return (0);
// }
