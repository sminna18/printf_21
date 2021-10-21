/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminna <sminna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:56:38 by sminna            #+#    #+#             */
/*   Updated: 2021/10/17 16:05:11 by sminna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_print_char(char arr)
{
	write (1, &arr, 1);
	return (1);
}

int	ft_printf_percents(const char arr, va_list ap)
{
	int	n;

	n = 0;
	if (arr == 's')
		n = ft_printf_percents_s(ap);
	if (arr == 'c')
		n = ft_printf_percents_c(ap);
	if (arr == 'i' || arr == 'd')
		n = ft_printf_percents_id(ap);
	if (arr == 'u')
		n = ft_printf_percents_u(ap);
	if (arr == '%')
		n = ft_printf_print_char('%');
	if (arr == 'p')
		n = ft_printf_percents_p(ap);
	if (arr == 'x')
		n = ft_printf_percents_x(ap);
	if (arr == 'X')
		n = ft_printf_percents_xx(ap);
	return (n);
}

int	ft_printf_arr_runer(const char *arr, va_list ap)
{
	int	i;
	int	n;
	int	t;

	i = 0;
	n = 0;
	while (arr[i])
	{
		t = 0;
		if (arr[i] == '%' && arr[i + 1])
			t = ft_printf_percents(arr[i + 1], ap);
		else if (arr[i] != '%')
			n = n + ft_printf_print_char(arr[i]);
		if (t || t == -7)
			i++;
		if (t == -7)
			t = 0;
		i++;
		n = n + t;
	}
	return (n);
}

int	ft_printf(const char *arr, ...)
{
	va_list	ap;
	int		n;

	va_start (ap, arr);
	n = ft_printf_arr_runer(arr, ap);
	va_end (ap);
	return (n);
}
