/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:27:01 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/24 04:22:41 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_itoa_base(int nbr, char *base);
void	ft_itoa_base_helper(long nbr, char *result, char *base, int len);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
		ptr++;
	while (*src != '\0' && nb > 0)
	{
		*ptr++ = *src++;
		nb--;
	}
	*ptr = '\0';
	return (dest);
}

int	to_base_index(char *base, char number)
{
	int	index;

	index = 0;
	while (*base && *base != number)
	{
		index++;
		base++;
	}
	if (*base == '\0')
		return (-1);
	return (index);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	result;
	int	sign;

	base_len = ft_strlen(base);
	result = 0;
	sign = 1;
	while (*str == ' ' || ('\t' <= *str && *str <= '\r'))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (to_base_index(base, *str) != -1)
	{
		result = (result * base_len) + to_base_index(base, *str);
		str++;
	}
	return (result * sign);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		len;
	long	number;
	char	*result;

	len = ft_strlen(base);
	number = nbr;
	result = malloc(sizeof(char) * 33);
	*result = '\0';
	if (number < 0)
	{
		ft_strncat(result, "-", 1);
		number *= -1;
	}
	ft_itoa_base_helper(number, result, base, len);
	return (result);
}

void	ft_itoa_base_helper(long nbr, char *result, char *base, int len)
{
	int	rest;
	int	rightmost_digit;

	rightmost_digit = nbr % len;
	rest = nbr / len;
	if (nbr < len)
	{
		ft_strncat(result, &base[rightmost_digit], 1);
		return ;
	}
	ft_itoa_base_helper(rest, result, base, len);
	ft_strncat(result, &base[rightmost_digit], 1);
}
