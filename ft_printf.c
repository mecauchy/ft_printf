/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:10:17 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/27 03:00:18 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
 {
	va_list	arg;
	int		count;

	count = 0;
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%' && format + 1 && ...)
			count += ft_print_exec(format + 1);
		if (*format && *format != '%')
		{
			ft_putchar(format);
			format++;
			count++;
		}
		if (!(*format))
		{
			write(1, "(null)", 6);
			va_end(arg);
		}
	}
	va_end(arg);
	return (count);
 }
