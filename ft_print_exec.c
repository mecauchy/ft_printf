/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_exec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:20:36 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/28 17:40:23 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_exec(va_list arg, char *format)
{
	if (*format == 's')
		return (ft_search_s(arg));
	else if (*format == 'p')
		return (ft_search_p(arg));
	else if (*format == 'd' || *format == 'i')
		return (ft_search_d_i(arg));
	else if (*format == 'X')
		return (ft_search_xx(arg));
	else if (*format == 'x')
		return (ft_search_x(arg));
	else if (*format == 'c')
		return (ft_search_c(arg));
	else if (*format == 'u')
		return (ft_search_u(arg));
	else if (*format == '%')
		return (ft_putchar('%'));
	return (0);
}
