/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 02:36:39 by nkannan           #+#    #+#             */
/*   Updated: 2023/03/30 06:15:03 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALC_H
# define CALC_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_itoa_helper(int n, char *str);
void	ft_itoa(int val, char *output);
void	ft_putnbr(int nb);

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		print_result(int result, int error);

int		add(int a, int b);
int		sub(int a, int b);
int		multi(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);

#endif