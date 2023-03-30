/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:41:09 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 16:20:28 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	char	*str4;

// 	str1 = "Hello, world!";
// 	str2 = "Hello,\nworld!";
// 	str3 = "\\";
// 	str4 = "";
// 	printf("\"Hello, world!\": %d\n", ft_str_is_printable(str1));
// 	printf("\"Hello,\\nworld!\": %d\n", ft_str_is_printable(str2));
// 	printf("\\\\: %d\n", ft_str_is_printable(str3));
// 	printf("\"\": %d\n", ft_str_is_printable(str4));
// }
