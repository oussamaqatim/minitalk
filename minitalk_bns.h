/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bns.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:10:44 by oqatim            #+#    #+#             */
/*   Updated: 2022/03/05 18:44:50 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BNS_H
# define MINITALK_BNS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include "ft_printf/ft_printf.h"

int		g_checksum;
size_t	ft_strlen(char *s);
int		ft_atoi(const char *str);
char	*ft_strdup(char *str);

#endif
