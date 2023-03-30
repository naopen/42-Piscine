/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:49:14 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/14 14:50:15 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	int		result;

// 	str1 = "hello";
// 	str2 = "world";
// 	result = ft_strcmp(str1, str2);
// 	if (result < 0)
// 	{
// 		printf("'%s' は '%s' より小さいです。\n", str1, str2);
// 	}
// 	else if (result > 0)
// 	{
// 		printf("'%s' は '%s' より大きいです。\n", str1, str2);
// 	}
// 	else
// 	{
// 		printf("'%s' と '%s' は等しいです。\n", str1, str2);
// 	}
// 	return (0);
// }
