/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:34:43 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/27 02:09:24 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
//{
//	write(1, &c, 1);
//	return (c);
//}

//int	ft_putnbr_base(unsigned int nb)
//{
//	int		count;
//	int		min;

//	count = 0;
//	i = 0;
//	min = -2147483648;
//	if (nb == min)
//		write(1, "-2147483648", 11);
//	if (nb < 0)
//	{
//		nb = -nb;
//		write(1, "-", 1);
//	}
//	if (nb >= ft_strlen_base(nb))
//	{
//		count += ft_putnbr(nb / ft_strlen_base(nb));
//		count += ft_putnbr(nb % ft_strlen_base(nb));
//	}
//	else
//		ft_putchar(nb + 48);
//	return (count);
//}

//int	ft_putnbr_base_hex(unsigned long n)
//{
//	int		min;

//	i = 0;
//	min = -2147483648;
//	if (nb == min)
//		write(1, "-2147483648", 11);
//	if (nb < 0)
//	{
//		nb = -nb;
//		write(1, "-", 1);
//	}
//	if (nb >= ft_strlen_base(nb)))
//	{
//		ft_putnbr(nb / ft_strlen_base(nb));
//		ft_putnbr(nb % ft_strlen_base(nb));
//	}
//	else
//		ft_putchar(base[nb % 16]); // + 48 ?
//		count ++;
//	return (count);
//}

//int	ft_put_hex(va_list)
//{
//	int				count;
//	unsigned int	x;
	
//	count = 0;
//	x = (int)va_list(arg, int);
//	count += ft_putnbr_base
//}

////void	ft_putstr(char *str)

//int		ft_putnbr(int nb);
//{
//	int	i;

//	i = 0;
//	while (str[i])
//	{
//		write(1, &str[i], 1);
//		i++;
//	}
//}

//int	ft_print_hexa(unsigned int x)
//{
//	char	*hexa;

//	hexa = "123456789abcdef";
//	while (x >= 16)
//	{
//		write(1, &hexa[x % 16], 1);
//		x = x / 16;
//	}
//	return ((unsigned int)x);
//}

//int	ft_put_xx(va_list arg, int x)
//{
//	int	count;

//	count = 0;
//	x = (int)va_arg(args, int);
//	count += ft_putnbr_base_xx(x);
//	return (count);
//}

//int	ft_search_arg_idc(va_list arg)
//{
//		int count;
//		int	n;

//		count = 0;
//		n = (int)va_arg(arg, int);
//		count += ft_putnbr(n);
//		return (count);
//}

//int	ft_search_arg(va_list arg)
//{
//	int	count;
//	const char	*s;

//	count = 0;
//	s = va_arg((const char *)va_arg(arg, const char *));
//	count += ft_putstr(s);
//	return (count);
//}

//int	ft_putchar_c(va_list, char c)
//{
//	int	count;
	
//	count = 0;
//	c = (const char)va_arg(arg, int);
//	ft_putchar(c);
//	count++; //boucle infini ?

//	return (count);
//}

//int	ft_search_p(va_list arg, void *p)
//{
//	int				count;
//	unsigned long	ptr;
	
//	count = 0;
//	p = (unsigned long)va_arg(arg, void *);
//	ft_putstr("Ox");
//	count += ft_print_hexa((unsigned int)p); // pk +=

//	return (count + 2);  // ?? + 2
//}

ft_put_unsigned(va_list arg, unsigned int u)
{
	int	count;

	count = 0;
	u = (unsigned int)va_arg(arg, unsigned int);
	count += ft_putnbr_base((unsigned int)u);
}

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
	return (count); //dcp tout modifier ??//
 }
 
// revoir les return, faire ft_print_exec.c//
// revoir les putnbr et putnbr base 
