/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:07:47 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/14 15:12:40 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	if (size <= dest_len)
		return (src_len + size);
	size--;
	while (*src && size > dest_len)
		dest[dest_len++] = *src++;
	dest[dest_len] = '\0';
	return (total_len);
}

// #include <stdio.h>

// char			dest[20] = "Hello, ";
// char			src[] = "world!";

// int	main(void)
// {
// 	unsigned int	size;
// 	unsigned int	result;

// 	size = 20;
// 	result = ft_strlcat(dest, src, size);
// 	printf("実際に作ろうとしたサイズ: %u\n", result);
// 	printf("連結結果: %s\n", dest);
// 	return (0);
// }
