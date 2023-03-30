/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 04:41:41 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/13 05:07:10 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

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

// int	main(void)
// {
// 	char	*str;
// 	int		i;

// 	str = "Hello World!";
// 	i = ft_strlen(str);
// 	printf("%s\n", str);
// 	printf("length: %d\n", i);
// }
