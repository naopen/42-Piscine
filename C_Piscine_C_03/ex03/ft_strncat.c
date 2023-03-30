/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:59:00 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/14 15:16:58 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && nb > 0)
	{
		*ptr++ = *src++;
		nb--;
	}
	*ptr = '\0';
	return (dest);
}

// #include <stdio.h>

// char	str1[20] = "Hello ";
// char	str2[] = "world!";

// int	main(void)
// {
// 	unsigned int	n;

// 	n = 4;
// 	printf("指定した文字数: %d\n", n);
// 	printf("連結後の文字列: %s\n", ft_strncat(str1, str2, n));
// 	return (0);
// }
