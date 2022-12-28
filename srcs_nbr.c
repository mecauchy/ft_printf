/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs_nbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 01:57:48 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/28 18:13:27 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int		i;
	char	nbr;
	int		count;

	i = 0;
	count = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		nb = -nb;
		count += ft_putchar('-');
	}
	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		count += ft_putnbr(nb % 10);
	}
	else
	{
		nbr = 48 + nb;
		count += ft_putchar(nbr);
	}
	return (count);
}

int	ft_putnbr_u(unsigned int nb)
{
	int		count;

	count = 0;
	if (nb >= 10)
	{
		count += ft_putnbr_u(nb / 10);
		count += ft_putnbr_u(nb % 10);
	}
	else
		count += ft_putchar(nb + '0');
	return (count);
}
