/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 23:58:54 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/27 16:51:04 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_func(char c, va_list str, int *ptr)
{
	if (c == 'c')
		ft_putchar(va_arg(str, int), ptr);
	else if (c == 's')
		ft_putstr(va_arg(str, char *), ptr);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(str, int), ptr);
	else if (c == 'p')
		ft_point(va_arg(str, unsigned long), ptr);
	else if (c == 'x')
		ft_hexa_lower(va_arg(str, unsigned int), ptr);
	else if (c == 'X')
		ft_hexe_upper(va_arg(str, unsigned int), ptr);
	else if (c == '%')
		ft_putchar('%', ptr);
	else if (c == 'u')
		ft_unsi(va_arg(str, unsigned int), ptr);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		k;
	va_list	str;

	k = 0;
	va_start(str, s);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '%')
			ft_putchar(s[i], &k);
		else
		{
			i++;
			ft_func(s[i], str, &k);
		}
		i++;
	}
	return (k);
}
