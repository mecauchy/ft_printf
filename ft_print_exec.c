/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_exec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:20:36 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/27 02:29:46 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_exec(va_list arg, char *format)
{
		if (*format + 1 == 's')
			return (ft_search_s(arg));  //-> on commence apres le %//
		else if (format + 1 == 'p')
			return (ft_search_p(arg));
		else if (format + 1 == 'd' || format + 1 == 'i')
			return (ft_search_d_i(arg));
		else if (format + 1 == 'X')
			return (ft_search_xx(arg));
		else if (format + 1 == 'x')
			return (ft_search_x(arg));
		else if (format + 1 == 'c')
			return (ft_search_c(arg));
		else if (format == 'u')
			return (ft_search_u(arg)); // pk on return et pas +=
		else if (format + 1 == '%')
		{
			ft_putchar('%');
			return (1); // pk return 1
		}
		else
			format = ft_read_txt(format);
		return (0);
}
