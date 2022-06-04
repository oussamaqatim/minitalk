/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 23:57:10 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/27 16:50:15 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
void	ft_putchar(char c, int *ptr);
void	ft_putstr(char *ptr, int *p);
void	ft_putnbr(int n, int *p);
void	ft_hexa_lower(unsigned int n, int *p);
void	ft_hexe_upper(unsigned int n, int *p);
void	ft_point(unsigned long n, int *p);
void	ft_unsi(unsigned long n, int *p);

#endif
