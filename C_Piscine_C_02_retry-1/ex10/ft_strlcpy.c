/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:22:21 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 19:37:22 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (i < size - 1 && i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char			*src;
// 	char			dest[6];
// 	unsigned int	result;

// 	src = "hello world";
// 	result = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	printf("result: %u\n", result);
// 	return (0);
// }
