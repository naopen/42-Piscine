/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 22:28:04 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/26 22:28:05 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

int	ft_char_is_printable(char c)
{
	if (c < 32 || c > 127)
		return (0);
	return (1);
}

int	ft_return(int minuses, int final_number)
{
	if (minuses % 2 == 1)
		return (-final_number);
	return (final_number);
}

int	ft_atoi_mainloop(char *str, int minuses, int final_number)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				minuses += 1;
			i++;
		}
		while (ft_char_is_numeric(str[i]))
		{
			final_number = final_number * 10 + (str[i] - 48);
			i++;
		}
		while (!ft_char_is_numeric(str[i]))
			return (ft_return(minuses, final_number));
	}
	return (ft_return(minuses, final_number));
}

int	ft_atoi(char *str)
{
	int	minuses;
	int	final_number;

	minuses = 0;
	final_number = 0;
	return (ft_atoi_mainloop(str, minuses, final_number));
}
