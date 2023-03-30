/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:11:01 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 16:19:57 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
// 	str4 = "agaghagah";
// 	str5 = "";
// 	printf("\"25252\": %d\n", ft_str_is_lowercase(str1));
// 	printf("\"eqr415\": %d\n", ft_str_is_lowercase(str2));
// 	printf("\"gaAFSFgag\": %d\n", ft_str_is_lowercase(str3));
// 	printf("\"agaghagah\": %d\n", ft_str_is_lowercase(str4));
// 	printf("\"\": %d\n", ft_str_is_lowercase(str5));
// 	return (0);
// }
