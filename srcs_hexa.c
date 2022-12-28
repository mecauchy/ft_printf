/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs_hexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:51:31 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/28 18:09:20 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_p(unsigned long nbr)
{
	char			*base;
	unsigned long	nb;
	int				count;

	base = "0123456789abcdef";
	nb = nbr;
	count = 0;
	if (nb >= 16)
	{
		count += ft_putnbr_base_p(nb / 16);
		count += ft_putnbr_base_p(nb % 16);
	}
	else
	{
		ft_putchar(base[nb % 16]);
		count++;
	}
	return (count);
}

int	ft_putnbr_base_xx(unsigned int nbr)
{
	char			*base;
	unsigned long	nb;
	int				count;

	base = "0123456789ABCDEF";
	nb = nbr;
	count = 0;
	if (nb >= 16)
	{
		count += ft_putnbr_base_xx(nb / 16);
		count += ft_putnbr_base_xx(nb % 16);
	}
	else
	{
		ft_putchar(base[nb % 16]);
		count++;
	}
	return (count);
}

int	ft_putnbr_base_x(unsigned int nbr)
{
	char			*base;
	unsigned long	nb;
	int				count;

	base = "0123456789abcdef";
	nb = nbr;
	count = 0;
	if (nb >= 16)
	{
		count += ft_putnbr_base_x(nb / 16);
		count += ft_putnbr_base_x(nb % 16);
	}
	else
	{
		ft_putchar(base[nb % 16]);
		count++;
	}
	return (count);
}
