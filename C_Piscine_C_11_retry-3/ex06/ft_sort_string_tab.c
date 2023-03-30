/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 04:39:31 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/30 04:49:12 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort(char **tab, int i, int len)
{
	int		j;
	int		k;
	char	*tmp;

	j = i + 1;
	while (j < len)
	{
		k = 0;
		while (tab[i][k] == tab[j][k])
		{
			k++;
		}
		if (tab[i][k] > tab[j][k])
		{
			tmp = tab[i];
			tab[i] = tab[j];
			tab[j] = tmp;
		}
		j++;
	}
}

void	ft_sort_string_tab(char **tab)
{
	int	len;
	int	i;

	len = 0;
	while (tab[len])
	{
		len++;
	}
	i = 0;
	while (i < len - 1)
	{
		ft_sort(tab, i, len);
		i++;
	}
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	**tab;
// 	int		i;

// 	i = 0;
// 	tab = (char **)malloc(sizeof(char *) * 5);
// 	tab[0] = "abc";
// 	tab[1] = "ab";
// 	tab[2] = "a";
// 	tab[3] = "abcd";
// 	tab[4] = 0;
// 	ft_sort_string_tab(tab);
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// }
