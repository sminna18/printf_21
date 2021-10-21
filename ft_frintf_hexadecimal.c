/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frintf_hexadecimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminna <sminna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:08:22 by sminna            #+#    #+#             */
/*   Updated: 2021/10/20 20:37:54 by sminna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_frintf_hexadecimal_p(unsigned long long int x, int n)
{
	char	*a;

	a = "0123456789abcdef";
	n = 0;
	if (x >= 16)
		n = ft_frintf_hexadecimal_p((x / 16), n);
	else
	{
		if (x < 0)
		{
			x = x * -1;
		}	
		n = n + ft_printf_print_char(a[x]);
		return (n);
	}
	x = x % 16;
	if (x < 0)
		x = x * -1;
	n = n + ft_printf_print_char(a[x]);
	return (n);
}

int	ft_frintf_hexadecimal_xx(unsigned int x, int n)
{
	char	*a;

	a = "0123456789ABCDEF";
	n = 0;
	if (x >= 16)
		n = ft_frintf_hexadecimal_xx((x / 16), n);
	else
	{
		if (x < 0)
		{
			x = x * -1;
		}	
		n = n + ft_printf_print_char(a[x]);
		return (n);
	}
	x = x % 16;
	if (x < 0)
		x = x * -1;
	n = n + ft_printf_print_char(a[x]);
	return (n);
}

int	ft_frintf_hexadecimal_x(unsigned int x, int n)
{
	char	*a;

	a = "0123456789abcdef";
	n = 0;
	if (x >= 16)
		n = ft_frintf_hexadecimal_x((x / 16), n);
	else
	{
		if (x < 0)
		{
			x = x * -1;
		}	
		n = n + ft_printf_print_char(a[x]);
		return (n);
	}
	x = x % 16;
	if (x < 0)
		x = x * -1;
	n = n + ft_printf_print_char(a[x]);
	return (n);
}
