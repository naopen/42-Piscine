/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:13:47 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/16 18:45:25 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (s1);
}

// #include <stdio.h>

// char	*ft_strcpy(char *s1, char *s2);

// char	boy[] = "harry";
// char	girl[] = "sally";

// int	main(void)
// {
// 	printf("boy is: %s\n", boy);
// 	printf("girl is: %s\n", girl);
// 	ft_strcpy(boy, girl);
// 	printf("boy is: %s\n", boy);
// 	return (0);
// }
