/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:27:03 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/15 21:08:50 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p)
	{
		p++;
	}
	return (p - str);
}

// #include <stdio.h>

// char	s[] = "Hello, World!";

// int	main(void)
// {
// 	printf("対象文字列: %s\n", s);
// 	printf("文字列の長さは %d です。\n", ft_strlen(s));
// 	return (0);
// }
