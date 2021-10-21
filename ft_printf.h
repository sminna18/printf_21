/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminna <sminna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:16:34 by sminna            #+#    #+#             */
/*   Updated: 2021/10/17 15:52:33 by sminna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<unistd.h>
# include	<stdarg.h>

int		ft_printf(const char *arr, ...);
int		ft_printf_print_char(char arr);
int		ft_printf_percents(const char arr, va_list ap);
int		ft_printf_arr_runer(const char *arr, va_list ap);
int		ft_printf_percents_c(va_list ap);
int		ft_printf_percents_s(va_list ap);
int		ft_printf_percents_id(va_list ap);
int		ft_printf_percents_u(va_list ap);
int		ft_printf_percents_p(va_list ap);
int		ft_printf_percents_x(va_list ap);
int		ft_printf_percents_xx(va_list ap);
int		ft_frintf_hexadecimal_p(unsigned long long int x, int n);
int		ft_frintf_hexadecimal_x(unsigned int x, int n);
int		ft_frintf_hexadecimal_xx(unsigned int x, int n);
int		ft_counter_id(int n, int i);
void	ft_translate_id(int i, int n, char *x);
int		ft_frintf_mini_itoa(int n);
int		ft_counter_u(unsigned int n, unsigned int i);
void	ft_translate_u(int i, unsigned int n, char *x);
int		ft_frintf_mini_itoa_u(unsigned int n);

#endif
