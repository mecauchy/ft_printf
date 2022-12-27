/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:52:42 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/27 02:56:02 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_search_s(va_list arg)
{
	int			count;
	const char	*s;

	count = 0;
	s = va_arg((const char *)va_arg(arg, const char *));
	count += ft_putstr(s);
	return (count);
}

int	ft_search_p(va_list arg)
{
	int				count;
	unsigned long	p;

	count = 0;
	p = (unsigned long)va_arg(arg, unsigned long);
	ft_putstr("Ox");
	count += ft_putnbr_base_p((unsigned int)p); // pk +=
	return (count + 2);// ?? + 2
}

int	ft_search_d_i(va_list arg)
{
	int count;
	int	n;

	count = 0;
	n = (int)va_arg(arg, int);
	count += ft_putnbr(n);
	return (count);
}

int	ft_search_xx(va_list arg)
{
	int				count;
	unsigned int	x;

	count = 0;
	x = (unsigned int)va_arg(args, unsigned int);
	count += ft_putnbr_base_xx(x); //a modifier//
	return (count);
}

int	ft_search_x(va_list arg)
{
	int				count;
	unsigned int	x

	count = 0;
	x = (int)va_arg(arg, int);
	count += ft_putnbr_base_x(x);// a modifier//
	return (count);
}
