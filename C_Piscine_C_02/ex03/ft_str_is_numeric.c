/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:00:24 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 16:19:50 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
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

// 	str1 = "25252";
// 	str2 = "eqr415";
// 	str3 = "gaAFSFgag";
// 	str4 = "";
// 	printf("\"25252\": %d\n", ft_str_is_numeric(str1));
// 	printf("\"eqr415\": %d\n", ft_str_is_numeric(str2));
// 	printf("\"gaAFSFgag\": %d\n", ft_str_is_numeric(str3));
// 	printf("\"\": %d\n", ft_str_is_numeric(str4));
// 	return (0);
// }
