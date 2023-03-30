/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 03:20:06 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/30 06:16:59 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	}
	return (result * sign);
}

// void	ft_itoa_helper(int n, char *str)
// {
// 	int	temp;
// 	int	len;

// 	if (n == 0)
// 		*str++ = '0';
// 	else if (n < 0)
// 	{
// 		*str++ = '-';
// 		n *= -1;
// 	}
// 	temp = n;
// 	len = 0;
// 	while (temp > 0)
// 	{
// 		temp /= 10;
// 		len++;
// 	}
// 	str[len] = '\0';
// 	while (len > 0)
// 	{
// 		str[--len] = n % 10 + '0';
// 		n /= 10;
// 	}
// }

// void	ft_itoa(int val, char *output)
// {
// 	if (val < 0)
// 	{
// 		*output++ = '-';
// 		val = -val;
// 	}
// 	ft_itoa_helper(val, output);
// 	while (*output != '\0')
// 		output++;
// 	*output++ = '\n';
// 	*output = '\0';
// }
