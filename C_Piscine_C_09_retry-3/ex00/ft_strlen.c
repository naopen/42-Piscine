/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 04:41:41 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/27 12:45:11 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	int		i;

// 	str = "Hello World!";
// 	i = ft_strlen(str);
// 	printf("%s\n", str);
// 	printf("length: %d\n", i);
// }
