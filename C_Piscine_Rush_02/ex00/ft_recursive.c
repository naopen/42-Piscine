/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:28:18 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/26 22:28:19 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#define SIZE_BUFFER 351

int			ft_atoi(char *str);
int			ft_div(int nb);
void		ft_putchar(char c);

int			g_space = 0;
extern int	g_dict_size;

char	*ft_find_line(unsigned int nb, char *buffer)
{
	char	*str;
	int		i;
	int		j;

	str = (char *)malloc(sizeof(char) * g_dict_size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (buffer[i] != '\0')
	{
		j = 0;
		while (buffer[i] != '\n')
		{
			str[j] = buffer[i];
			j++;
			i++;
		}
		str[j] = '\n';
		if ((unsigned int)ft_atoi(str) == nb)
			return (str);
		i++;
	}
	return (str);
}

void	ft_print(char *str)
{
	int	i;

	i = 0;
	if (g_space == 1)
		ft_putchar(' ');
	while (str[i] != ':')
		i++;
	i = i + 1;
	while (str[i] == ' ')
		i++;
	while (str[i] != '\n')
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			ft_putchar(str[i]);
		}
		if (str[i] != ' ')
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	g_space = 1;
}

void	ft_find_print(unsigned int nb, char *buffer)
{
	char	*str;

	str = ft_find_line(nb, buffer);
	ft_print(str);
	free(str);
}

void	ft_recursive(unsigned int nb, char *buffer)
{
	if (nb >= 0 && nb <= 19)
		ft_find_print(nb, buffer);
	else if (nb >= 20 && nb <= 99)
	{
		ft_find_print(nb - (nb % 10), buffer);
		if (nb % ft_div(nb) != 0)
			ft_recursive(nb % ft_div(nb), buffer);
	}
	else if (nb > 99)
	{
		ft_recursive(nb / ft_div(nb), buffer);
		ft_find_print(ft_div(nb), buffer);
		if (nb % ft_div(nb) != 0)
			ft_recursive(nb % ft_div(nb), buffer);
	}
}
