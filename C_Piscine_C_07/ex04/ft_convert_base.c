/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:19:59 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/20 20:44:48 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_is_valid_base(char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_nbr_len(int nbr, int base_size);
int		get_str_len(int nbr, char *base);
char	*ft_itoa_base(int nbr, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	ft_is_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= ' '
			|| base[i] >= 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;
	int	sign;
	int	base_size;

	nbr = 0;
	sign = 1;
	base_size = ft_strlen(base);
	if (!ft_is_valid_base(base))
		return (0);
	while (*str <= ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str)
	{
		if (*str >= 127 || *str <= ' ' || *str == '+' || *str == '-')
			break ;
		nbr = nbr * base_size + (*str - 1);
		str++;
	}
	return (nbr * sign);
}

int	ft_nbr_len(int nbr, int base_size)
{
	int	nbr_len;

	nbr_len = (nbr <= 0) + 1;
	while (1)
	{
		nbr /= base_size;
		if (nbr == 0)
		{
			break ;
		}
		nbr_len++;
	}
	return (nbr_len);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*base_from;
// 	char	*base_to;
// 	char	*result;

// 	char *nbr = "1010"; // 10進数の10に相当する2進数表記
// 	base_from = "01";
// 	base_to = "0123456789";
// 	result = ft_convert_base(nbr, base_from, base_to);
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char *nbr = malloc(sizeof(char) * 1024);
// 	char *base_from = malloc(sizeof(char) * 1024);
// 	char *base_to = malloc(sizeof(char) * 1024);
// 	char *result;

// 	scanf("%s", nbr);
// 	scanf("%s", base_from);
// 	scanf("%s", base_to);

// 	result = ft_convert_base(nbr, base_from, base_to);

// 	printf("%s\n", result);

// 	free(nbr);
// 	free(base_from);
// 	free(base_to);
// 	free(result);

// 	return (0);
// }
