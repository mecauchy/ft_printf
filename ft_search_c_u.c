/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_c_u.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:52:41 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/27 02:55:03 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_search_c(va_list arg)
{
	int		count;
	char	c;
	
	count = 0;
	c = (const char)va_arg(arg, int);
	ft_putchar(c);
	count++;//boucle infini ?
	return (count);
}

int	ft_search_u(va_list arg)
{
	int				count;
	unsigned int	u;

	count = 0;
	u = (unsigned int)va_arg(arg, unsigned int);
	count += ft_putnbr_u(u);
	return (count);
}
