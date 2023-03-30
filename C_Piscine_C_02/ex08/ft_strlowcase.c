/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:10:57 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 15:17:43 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*result;

	result = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
	return (result);
}

// #include <stdio.h>

// 	char	test1[] = "FT_STR_IS_printable";
// 	char	test2[] = "eQr415";
// 	char	test3[] = "!@#$%^&*";
// 	char	test4[] = "";

// int	main(void)
// {
// 	printf("%s\n", ft_strlowcase(test1));
// 	printf("%s\n", ft_strlowcase(test2));
// 	printf("%s\n", ft_strlowcase(test3));
// 	printf("%s\n", ft_strlowcase(test4));
// }
