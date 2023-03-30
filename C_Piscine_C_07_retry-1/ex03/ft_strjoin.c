/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:50:46 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/24 04:18:33 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}

char	*ft_strcat(char *dest, const char *src)
{
	char	*ptr;

	ptr = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

char	*join_strings(char *result, int size, char **strs, char *sep)
{
	int	index;

	index = 0;
	while (index < size)
	{
		if (index != 0)
			ft_strcat(result, sep);
		ft_strcat(result, strs[index]);
		index++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	int		total_len;
	char	*result;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		ft_strcat(result, "");
		return (result);
	}
	index = 0;
	total_len = 0;
	while (index < size)
	{
		total_len += ft_strlen(strs[index]);
		index++;
	}
	total_len = total_len + size * ft_strlen(sep);
	result = malloc(sizeof(char) * total_len);
	result[0] = '\0';
	result = join_strings(result, size, strs, sep);
	return (result);
}

// #include <stdio.h>

// char	*strs[] = {"Hello", "world", "this", "is", "a", "test"};
// char	*sep = " ";

// int	main(void)
// {
// 	char	*result;

// 	result = ft_strjoin(6, strs, sep);
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }
