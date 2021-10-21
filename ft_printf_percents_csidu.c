/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_percents_csidu.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminna <sminna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:59:14 by sminna            #+#    #+#             */
/*   Updated: 2021/10/17 13:47:53 by sminna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_percents_c(va_list ap)
{
	char	c;

	c = va_arg(ap, int);
	write (1, &c, 1);
	return (1);
}

int	ft_printf_percents_s(va_list ap)
{
	char	*s;
	int		i;

	i = 0;
	s = va_arg(ap, char *);
	if (s == NULL)
	{
		i = ft_printf("(null)");
		return (6);
	}
	if (!s[0])
		return (-7);
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_printf_percents_id(va_list ap)
{
	int	i;

	i = 0;
	i = ft_frintf_mini_itoa(va_arg(ap, int));
	return (i);
}

int	ft_printf_percents_u(va_list ap)
{
	int				i;
	unsigned int	d;

	i = 0;
	d = va_arg(ap, unsigned int);
	i = ft_frintf_mini_itoa_u(d);
	return (i);
}
