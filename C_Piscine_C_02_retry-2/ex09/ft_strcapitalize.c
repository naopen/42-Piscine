/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:19:50 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/20 06:24:06 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_word_start;

	i = 0;
	is_word_start = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (is_word_start && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			is_word_start = 0;
		}
		else if ((str[i] >= 32 && str[i] <= 47))
			is_word_start = 1;
		else if ((str[i] >= 58 && str[i] <= 64))
			is_word_start = 1;
		else if ((str[i] >= 91 && str[i] <= 96) || str[i] >= 123)
			is_word_start = 1;
		else if (str[i] >= '0' && str[i] <= '9')
			is_word_start = 0;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// char	test1[] = "Ul&kh{esdqm^;*x!ux`jwn4s#|r B`:'*?' [qht$";
// char	test2[] = "42mots !quar4MaNte-deux; cinq5uAnte+et+un";
// char	test3[] = "!@#$%^&*";
// char	test4[] = "";

// int	main(void)
// {
// 	printf("%s\n", ft_strcapitalize(test1));
// 	printf("%s\n", ft_strcapitalize(test2));
// 	printf("%s\n", ft_strcapitalize(test3));
// 	printf("%s\n", ft_strcapitalize(test4));
// }
