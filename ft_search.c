/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:52:42 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/28 18:09:12 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_search_s(va_list arg)
{
	int			count;
	char		*s;

	s = (char *)va_arg(arg, char *);
	count = ft_putstr(s);
	return (count);
}

int	ft_search_p(va_list arg)
{
	int				count;
	unsigned long	p;

	p = (unsigned long)va_arg(arg, unsigned long);
	count = ft_putstr("0x");
	count += ft_putnbr_base_p(p);
	return (count);
}

int	ft_search_d_i(va_list arg)
{
	int	count;
	int	n;

	n = (int)va_arg(arg, int);
	count = ft_putnbr(n);
	return (count);
}

int	ft_search_xx(va_list arg)
{
	int				count;
	unsigned int	x;

	x = (unsigned int)va_arg(arg, unsigned int);
	count = ft_putnbr_base_xx(x);
	return (count);
}

int	ft_search_x(va_list arg)
{
	int				count;
	unsigned int	x;

	x = (int)va_arg(arg, int);
	count = ft_putnbr_base_x(x);
	return (count);
}
