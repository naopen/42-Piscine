/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:59:38 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/14 14:52:28 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n--)
	{
		if (*s1 != *s2 || !*s1 || !*s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	int		n;
// 	int		result;

// 	str1 = "Hello, world!";
// 	str2 = "Hello, everyone!";
// 	n = 7;
// 	result = ft_strncmp(str1, str2, n);
// 	if (result == 0)
// 	{
// 		printf("%d文字目まで、\"%s\"と\"%s\"は同じです。\n", n, str1, str2);
// 	}
// 	else if (result < 0)
// 	{
// 		printf("%d文字目まで、\"%s\"は\"%s\"よりも小さいです。\n", n, str1, str2);
// 	}
// 	else
// 	{
// 		printf("%d文字目まで、\"%s\"は\"%s\"よりも大きいです。\n", n, str1, str2);
// 	}
// 	return (0);
// }
