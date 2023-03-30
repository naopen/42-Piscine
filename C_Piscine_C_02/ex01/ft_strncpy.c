/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:21:40 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 16:19:13 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*src;
// 	char	dest[20];

// 	src = "Hello, world!";
// 	ft_strncpy(dest, src, 5);
// 	printf("%s\n", dest);
// 	ft_strncpy(dest, src, 20);
// 	printf("%s\n", dest);
// 	return (0);
// }
