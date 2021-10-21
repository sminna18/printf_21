/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frintf_mini_itoa_u.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminna <sminna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:23:07 by sminna            #+#    #+#             */
/*   Updated: 2021/10/16 22:30:05 by sminna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_counter_u(unsigned int n, unsigned int i)
{
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_translate_u(int i, unsigned int n, char *x)
{
	while (i >= 0)
	{
		x[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
}

int	ft_frintf_mini_itoa_u(unsigned int n)
{
	int				i;
	unsigned int	g;
	char			x[20];

	i = 0;
	g = 0;
	i = ft_counter_u(n, i);
	x[i + 1] = 0;
	ft_translate_u(i, n, &x[0]);
	i = 0;
	while (x[i])
	{
		i = i + ft_printf_print_char(x[i]);
	}
	return (i);
}
