/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 04:51:01 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/30 06:30:23 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		tab_len;
	char	*tmp;

	tab_len = 0;
	while (tab[tab_len])
		tab_len++;
	i = 0;
	while (i < tab_len)
	{
		j = 0;
		while (j < tab_len - i - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>
// #include <stdlib.h>

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	i;

// 	i = 0;
// 	while (s1[i] && s2[i] && s1[i] == s2[i])
// 		i++;
// 	return (s1[i] - s2[i]);
// }

// char	*tab[] = {"yz", "def", "ghi", "pqr", "stu", "vwx", "abc", "jkl", "mno",
// 		"pqr", "vwx", "stu", NULL};

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	ft_advanced_sort_string_tab(tab, &ft_strcmp);
// 	while (tab[i] != NULL)
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
