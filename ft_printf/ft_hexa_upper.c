/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 20:46:01 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/27 16:16:01 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexe_upper(unsigned int n, int *p)
{
	if (n < 16)
	{
		if (n < 10)
			ft_putchar((n + 48), p);
		else
			ft_putchar((n + 55), p);
	}
	else
	{
		ft_hexe_upper((n / 16), p);
		ft_hexe_upper((n % 16), p);
	}
}
