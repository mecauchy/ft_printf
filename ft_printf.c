/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:34:43 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/22 13:35:54 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nb)
{
	int		i;
	int		min;

	i = 0;
	min = -2147483648;
	if (nb == min)
		write(1, "-2147483648", 11);
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_hexa(unsigned int x)
{
	char	*hexa;

	hexa = "123456789abcdef";
	while (x >= 16)
	{
		write(1, &hexa[x % 16], 1);
		x = x / 16;
	}
}

const char	ft_shearch_arg_idc(va_list arg, const char *format)
{
		int	nb;

		if (*format == 'd' || *format == 'i')
		{
			nb = va_arg(arg, int);
			ft_putnbr(nb);
		}
		else if (*format == 'c')
		{
			nb = (char)va_arg(arg, int);
			ft_putnbr((char)c);
		}
		return ();
}

const char	ft_search_arg(va_list arg, const char *format)
{
	char			*s;

	while (*format == 's')
	{
		s = va_arg(arg, char *);
		ft_putstr(s);
	}
	format++;
	return (format);
}

int	ft_search_p(va_list arg, void *p)
{
	p = va_arg(arg, void *);
	ptr = ft_putstr("Ox");
	ptr = ft_print_hexa((unsigned int)p);
}

 int	ft_printf(const char *format, ...)
 {
	va_list	arg;
	int		res;

	res = 0;
	va_start(arg, format);
	
	while (*format)
	{
		if (*format == '%')
			if (format + 1 == 's')
				format = ft_search_arg(arg, format + 1);  //-> on commence apres le %//
			else if (format + 1 == 'p')
				format = ft_search_p(arg, format + 1);
			else if (format + 1 == 'd' || format + 1 == 'i' || format + 1 == 'c')
				format = ft_search_arg_idc(arg, format + 1);
			else if (format + 1 == 'u' || format + 1 == 'x' || format + 1 == 'X')
				format = ft_print_hexa(arg, format + 1);
			else if (format + 1 == '%')
				format = ft_putchar(%);
			else
				format = ft_read_txt(format);
		if (!format)
		{
			write(1, "(null)", 6);
			va_end(arg);
		}
		format ++;
	}
	va_end(arg);
	return (res); //dcp tout modifier ??//
 }
 
// revoir les return //
