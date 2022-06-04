/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 21:04:11 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/27 16:51:24 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa_p(unsigned long n, int *p)
{
	if (n < 16)
	{
		if (n < 10)
			ft_putchar((n + 48), p);
		else
			ft_putchar((n + 87), p);
	}
	else
	{
		ft_hexa_p((n / 16), p);
		ft_hexa_p((n % 16), p);
	}
}

void	ft_point(unsigned long n, int *p)
{
	ft_putstr("0x", p);
	ft_hexa_p(n, p);
}
