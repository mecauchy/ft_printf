/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs_nbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 01:57:48 by mecauchy          #+#    #+#             */
/*   Updated: 2022/12/27 02:38:54 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	int		i;
	int		min;
	char	nbr;

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
	{
		nbr = 48 + nb;
		write(1, &nbr, 1);
	}
}

int	ft_putnbr_u(unsigned int nb)
{
	int		count;
	int		min;

	count = 0;
	min = -2147483648;
	if (nb == min)
		write(1, "-2147483648", 11);
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	if (nb >= 10)
	{
		count += ft_putnbr_pf(nb / 10);
		count += ft_putnbr_pf(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
		count++;
	}
	return (count);
}
