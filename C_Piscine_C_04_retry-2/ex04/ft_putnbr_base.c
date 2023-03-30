/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:41:04 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/18 13:33:44 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;
	unsigned int	n;

	if (ft_check_base(base))
	{
		base_len = ft_strlen(base);
		if (nbr < 0)
		{
			write(1, "-", 1);
			n = (unsigned int)(-nbr);
		}
		else
		{
			n = (unsigned int)nbr;
		}
		if (n >= base_len)
		{
			ft_putnbr_base(n / base_len, base);
		}
		write(1, &base[n % base_len], 1);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("10進数で42を表示した結果:\n");
// 	ft_putnbr_base(42, "0123456789");
// 	printf("\n10進数で-2147483648を表示した結果:\n");
// 	ft_putnbr_base(-2147483648, "0123456789");
// 	printf("\n2進数で42を表示した結果:\n");
// 	ft_putnbr_base(42, "01");
// 	printf("\n2進数で-42を表示した結果:\n");
// 	ft_putnbr_base(-42, "01");
// 	printf("\n16進数で42を表示した結果:\n");
// 	ft_putnbr_base(42, "0123456789ABCDEF");
// 	printf("\n8進数(poneyvif)で-42を表示した結果:\n");
// 	ft_putnbr_base(-42, "poneyvif");
// 	printf("\nベースが1のサイズの場合に-42を表示した結果:\n");
// 	ft_putnbr_base(-42, "a");
// 	printf("\nベースに”＋”が含まれている場合に-42を表示した結果:\n");
// 	ft_putnbr_base(-42, "01+");
// 	printf("\nベースが7進数の場合に42を表示した結果:\n");
// 	ft_putnbr_base(42, "0123456");
// 	return (0);
// }
