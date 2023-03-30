/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:22:21 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/20 06:09:14 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size < 1)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// int				len;
// char			str[] = "abcdefg";
// char			buffer[5];

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	len = ft_strlcpy(buffer, str, 2);
// 	printf("%d\n", len);
// 	printf("%s\n", str);
// 	printf("%s\n", buffer);
// 	len = strlcpy(buffer, str, 2);
// 	printf("--%d\n", len);
// 	printf("--%s\n", str);
// 	printf("--%s\n", buffer);
// 	return (0);
// }
