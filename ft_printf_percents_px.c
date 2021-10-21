/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_percents_px.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminna <sminna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:50:32 by sminna            #+#    #+#             */
/*   Updated: 2021/10/20 20:37:53 by sminna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_percents_p(va_list ap)
{
	int	i;

	i = 0;
	i = i + (ft_printf_print_char('0'));
	i = i + ft_printf_print_char('x');
	i = i + ft_frintf_hexadecimal_p(va_arg(ap, unsigned long long int), i);
	return (i);
}

int	ft_printf_percents_x(va_list ap)
{
	int	i;

	i = 0;
	i = ft_frintf_hexadecimal_x(va_arg(ap, long long int), i);
	return (i);
}

int	ft_printf_percents_xx(va_list ap)
{
	int	i;

	i = 0;
	i = ft_frintf_hexadecimal_xx(va_arg(ap, unsigned int), i);
	return (i);
}
