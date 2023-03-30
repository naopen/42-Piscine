/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:47:15 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 16:19:30 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *str)
{
	char	*ptr;

	ptr = dest;
	while (*str != '\0')
	{
		*dest = *str;
		dest++;
		str++;
	}
	*dest = '\0';
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[20];
// 	char	*str;

// 	str = "Hello World!";
// 	ft_strcpy(dest, str);
// 	printf("src: %s\n", str);
// 	printf("dest: %s\n", dest);
// 	return (0);
// }
