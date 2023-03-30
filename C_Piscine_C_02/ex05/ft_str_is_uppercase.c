/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:31:46 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 16:20:16 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
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
// 	char	*str5;

// 	str1 = "25252";
// 	str2 = "eqr415";
// 	str3 = "gaAFSFgag";
// 	str4 = "AGHKYO";
// 	str5 = "";
// 	printf("\"25252\": %d\n", ft_str_is_uppercase(str1));
// 	printf("\"eqr415\": %d\n", ft_str_is_uppercase(str2));
// 	printf("\"gaAFSFgag\": %d\n", ft_str_is_uppercase(str3));
// 	printf("\"AGHKYO\": %d\n", ft_str_is_uppercase(str4));
// 	printf("\"\": %d\n", ft_str_is_uppercase(str5));
// 	return (0);
// }
