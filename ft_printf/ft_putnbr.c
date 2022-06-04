/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:22:02 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/27 13:23:13 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *p)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-', p);
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48, p);
	}
	else
	{
		ft_putnbr(nb / 10, p);
		ft_putnbr(nb % 10, p);
	}
}
