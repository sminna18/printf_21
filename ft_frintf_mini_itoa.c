/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frintf_mini_itoa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminna <sminna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:23:07 by sminna            #+#    #+#             */
/*   Updated: 2021/10/16 22:27:30 by sminna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_counter_id(int n, int i)
{
	while (n > 9 || n < -9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_translate_id(int i, int n, char *x)
{
	int	min;

	min = 1;
	if (n < 0)
		min = -1;
	while (i >= 0)
	{
		x[i] = (n % 10 * min) + '0';
		n = n / 10;
		i--;
	}
}

int	ft_frintf_mini_itoa(int n)
{
	int		min;
	int		i;
	int		g;
	char	x[20];

	min = 1;
	i = 0;
	g = 0;
	if (n < 0)
		min = -1;
	i = ft_counter_id(n, i);
	x[i + 1] = 0;
	ft_translate_id(i, n, &x[0]);
	if (min == -1)
		ft_printf_print_char('-');
	i = 0;
	while (x[i])
	{
		i = i + ft_printf_print_char(x[i]);
	}
	if (min == -1)
		i++;
	return (i);
}
