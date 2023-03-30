/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:27:01 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/20 20:43:21 by nkannan          ###   ########.fr       */
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

int	get_str_len(int nbr, char *base)
{
	int	size;
	int	len;

	size = ft_strlen(base);
	len = nbr <= 0;
	while (nbr && ++len)
	{
		nbr /= size;
	}
	return (len);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		size;
	int		len;
	char	*str;
	int		remainder;
	char	digit;

	size = ft_strlen(base);
	len = get_str_len(nbr, base);
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[len--] = '\0';
	if (nbr < 0 || len == 0)
		str[0] = '-';
	else if (nbr == 0)
		str[0] = base[0];
	while (nbr)
	{
		remainder = nbr % size;
		digit = base[remainder];
		str[len--] = digit;
		nbr /= size;
		if (nbr < 0)
			nbr *= -1;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nbr_dec;

	nbr_dec = ft_atoi_base(nbr, base_from);
	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return (NULL);
	return (ft_itoa_base(nbr_dec, base_to));
}
