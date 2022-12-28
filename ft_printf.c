/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:10:17 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/28 17:41:09 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			count += ft_print_exec(arg, (char *)format + i + 1);
			i += 1;
		}
		else if (format[i] && format[i] != '%')
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
