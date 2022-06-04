/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 18:32:06 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/27 16:15:45 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa_lower(unsigned int n, int *p)
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
		ft_hexa_lower((n / 16), p);
		ft_hexa_lower((n % 16), p);
	}
}
