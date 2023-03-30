/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:00:54 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/14 15:05:56 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*p1;
	char	*p2;

	if (!*to_find)
		return (str);
	while (*str)
	{
		p1 = str;
		p2 = to_find;
		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (!*p2)
			return (str);
		str++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*to_find;
// 	char	*result;

// 	str = "Hello, world!";
// 	to_find = "world";
// 	result = ft_strstr(str, to_find);
// 	if (result)
// 		printf("文字列 \"%s\" は \"%s\" を含んでいます。\n", str, to_find);
// 	else
// 		printf("文字列 \"%s\" は \"%s\" を含んでいません。\n", str, to_find);
// 	return (0);
// }
