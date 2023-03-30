/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:28:08 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/26 22:28:08 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char c);
int	ft_char_is_printable(char c);

int	ft_check_dict_loops(char *buffer, int i)
{
	while (buffer[i] == '\n')
		i++;
	if (!ft_char_is_numeric(buffer[i]))
		return (0);
	while (ft_char_is_numeric(buffer[i]))
		i++;
	while (buffer[i] == ' ')
		i++;
	if (buffer[i] != ':')
		return (0);
	i++;
	while (buffer[i] == ' ')
		i++;
	while (buffer[i] != '\n')
	{
		if (!ft_char_is_printable(buffer[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_dict(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\0')
	{
		ft_check_dict_loops(buffer, i);
		i++;
	}
	return (1);
}
