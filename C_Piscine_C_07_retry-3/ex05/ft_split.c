/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 03:10:54 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/27 03:53:10 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (is_charset(*str, charset))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (i < size - 1 && i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

void	split_string(char **result, char *str, char *charset)
{
	char	*ptr;
	int		len;
	int		separator;

	ptr = str;
	while (*str)
	{
		len = 0;
		separator = 0;
		while (*str && is_charset(*str, charset) && ++separator)
			str++;
		while (str[len] && !is_charset(str[len], charset))
			len++;
		*result = malloc(sizeof(char) * (len + 1));
		if (!result)
			return ;
		ft_strlcpy(*result++, ptr + separator, len + 1);
		str += len;
	}
	*result = "0";
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		word_count;

	word_count = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	split_string(result, str, charset);
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*charset;
	char	**ans;

	str = "_hello__+__world__+__japan__+__42__+__42Tokyo";
	charset = "+_";
	ans = ft_split(str, charset);
	printf("0: %s\n", ans[0]);
	printf("1: %s\n", ans[1]);
	printf("2: %s\n", ans[2]);
	printf("3: %s\n", ans[3]);
	printf("4: %s\n", ans[4]);
	printf("5: %s\n", ans[5]);
}
