/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:50:46 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/20 17:38:02 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *str)
{
	char	*ptr;

	ptr = dest;
	while (*str != '\0')
	{
		*dest = *str;
		dest++;
		str++;
	}
	*dest = '\0';
	return (ptr);
}

int	ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p)
	{
		p++;
	}
	return (p - str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*result;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * (size - 1);
	result = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!result)
		return (NULL);
	*result = '\0';
	i = -1;
	while (i < size)
	{
		i++;
		ft_strcpy(result + ft_strlen(result), strs[i]);
		if (i < size - 1)
			ft_strcpy(result + ft_strlen(result), sep);
	}
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
