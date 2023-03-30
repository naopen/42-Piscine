/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:59:22 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 15:09:37 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*result;

	result = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	test1[] = "ft_str_is_printable";
// 	char	test2[] = "eqr415";
// 	char	test3[] = "!@#$%^&*";
// 	char	test4[] = "";
// 	printf("%s\n", ft_strupcase(test1));
// 	printf("%s\n", ft_strupcase(test2));
// 	printf("%s\n", ft_strupcase(test3));
// 	printf("%s\n", ft_strupcase(test4));
// }
