/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:19:59 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/24 04:22:50 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_is_valid_base(char *str);
int		ft_atoi_base(char *str, char *base);
char	*ft_itoa_base(int nbr, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*result;

	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	result = ft_itoa_base(number, base_to);
	return (result);
}

int	ft_is_valid_base(char *str)
{
	int	len;
	int	i;
	int	j;

	len = ft_strlen(str);
	if (len <= 1)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] <= ' ' || str[i] >= 127)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	printf("%s\n", ft_convert_base("100", "01", "0123456789"));
// 	return (0);
// }

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*nbr;
// 	char	*base_from;
// 	char	*base_to;
// 	char	*result;

// 	nbr = malloc(sizeof(char) * 1024);
// 	base_from = malloc(sizeof(char) * 1024);
// 	base_to = malloc(sizeof(char) * 1024);
// 	printf("変換したい数字を入力(例: 100): ");
// 	scanf("%s", nbr);
// 	printf("base_from進数を入力(例: 01): ");
// 	scanf("%s", base_from);
// 	printf("base_to進数を入力(例: 0123456789): ");
// 	scanf("%s", base_to);
// 	result = ft_convert_base(nbr, base_from, base_to);
// 	printf("変換結果: %s\n", result);
// 	free(nbr);
// 	free(base_from);
// 	free(base_to);
// 	free(result);
// 	return (0);
// }
