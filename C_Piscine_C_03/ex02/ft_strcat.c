/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:53:47 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/14 14:57:14 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	char	*ptr;

	ptr = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

// #include <stdio.h>

// char	str1[10] = "Hello ";
// char	str2[10] = "World!";

// int	main(void)
// {
// 	ft_strcat(str1, str2);
// 	printf("連結後の文字列: %s\n", str1);
// 	return (0);
// }
