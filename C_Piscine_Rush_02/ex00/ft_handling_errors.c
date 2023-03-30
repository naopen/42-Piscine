/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handling_errors.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:28:12 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/26 22:28:13 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int			ft_strcmp(char *s1, char *s2);
int			ft_str_is_numeric(char *str);
void		ft_putstr(char *str);
void		ft_putchar(char c);
int			ft_atoi(char *str);
int			ft_check_dict(char *buffer);

extern int	g_dict_size;

int	check_dup(int *arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_dict_size)
	{
		j = 0;
		while (j < g_dict_size)
		{
			if (arr[i] == arr[j] && i != j && arr[i] != -1 && arr[j] != -1)
			{
				free(arr);
				return (0);
			}
			j++;
		}
		i++;
	}
	free(arr);
	return (1);
}

void	ft_fill_keys(char *buffer, char *str, int *arr)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
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
		if (str[0] != '\n')
			arr[k] = (unsigned int)ft_atoi(str);
		k++;
		i++;
	}
}

int	ft_list_keys(char *buffer, int *arr)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * g_dict_size);
	if (str == NULL)
		return (0);
	ft_fill_keys(buffer, str, arr);
	free(str);
	return (1);
}

int	ft_check_unique(char *buffer)
{
	int	*arr;
	int	i;

	arr = (int *)malloc(sizeof(int) * g_dict_size);
	if (arr == NULL)
		return (0);
	i = 0;
	while (i < g_dict_size)
	{
		arr[i] = -1;
		i++;
	}
	ft_list_keys(buffer, arr);
	return (check_dup(arr));
}

int	ft_error(char *str, int fd, char *buffer)
{
	if (ft_strcmp(str, "4294967295") == 0 || !ft_str_is_numeric(str))
	{
		ft_putstr("Error");
		ft_putchar('\n');
		return (0);
	}
	if (fd == -1 || !ft_check_dict(buffer) || !ft_check_unique(buffer))
	{
		ft_putstr("Dict Error");
		ft_putchar('\n');
		return (0);
	}
	return (1);
}
