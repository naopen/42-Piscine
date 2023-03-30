/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 21:02:04 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/14 21:20:07 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| base[i] == '\t' || base[i] == '\n' || base[i] == '\r'
			|| base[i] == '\f' || base[i] == '\v')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	value;

	if (!(*str) || !check_base(base))
		return (0);
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = 0;
	while ((get_value(*str, base)) != -1)
	{
		value = get_value(*str, base);
		result = result * ft_strlen(base) + value;
		str++;
	}
	return (result * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("2進数の文字列\"101010\"をint型に変換: %d\n", ft_atoi_base("101010", "01"));
// 	printf("10進数の文字列\"   -42\"をint型に変換: %d\n", ft_atoi_base("   -42",
// 				"0123456789"));
// 	printf("10進数の文字列\"   +42\"をint型に変換: %d\n", ft_atoi_base("   +42",
// 				"0123456789"));
// 	printf("10進数の文字列\"   42\"をint型に変換: %d\n", ft_atoi_base("   42",
// 				"0123456789"));
// 	printf("16進数の文字列\"4A4\"をint型に変換: %d\n", ft_atoi_base("4A4",
// 				"0123456789ABCDEF"));
// 	printf("2進数の文字列\"    \"をint型に変換: %d\n", ft_atoi_base("    ", "01"));
// 	printf("ベースに\"+\"が含まれている: %d\n", ft_atoi_base("101010", "01+"));
// 	printf("ベースが空: %d\n", ft_atoi_base("101010", ""));
// 	printf("ベースに同じ文字が2つ含まれている: %d\n", ft_atoi_base("101010", "01a1"));
// 	return (0);
// }
