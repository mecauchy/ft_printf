/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:24:57 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/28 18:09:28 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_exec(va_list arg, char *format);
int	ft_putnbr_base_p(unsigned long nbr);
int	ft_putnbr_base_xx(unsigned int nbr);
int	ft_putnbr_base_x(unsigned int nbr);
int	ft_putnbr_u(unsigned int nb);
int	ft_search_s(va_list arg);
int	ft_search_p(va_list arg);
int	ft_search_d_i(va_list arg);
int	ft_search_xx(va_list arg);
int	ft_search_x(va_list arg);
int	ft_search_c(va_list arg);
int	ft_search_u(va_list arg);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);

#endif
