/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:37:42 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/18 17:59:43 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
		|| *str == '\f' || *str == '\v')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
		// printf("result=%d, sign=%d\n", result, sign);
	}
	return (result * sign);
}

int	main(void)
{
	char	*str;
	int		result;

	str = "  ---+--+21474836489ab567";
	result = ft_atoi(str);
	printf("指定した文字列: %s\n", str);
	printf("ft_atoiが返した結果: %d\n", result);
	return (0);
}
