/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 01:20:02 by oqatim            #+#    #+#             */
/*   Updated: 2022/03/04 15:42:27 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "ft_printf/ft_printf.h"

typedef struct s_minitalk{
	int		bitcount;
	char	*bits;
	int		pid;
}t_minitalk;

char	*ft_9issma(char *c, int len, int i);
void	ft_message(int pid, char *str);
size_t	ft_strlen(char *s);
int		ft_atoi(const char *str);
void	ft_convert(char *s);
char	*ft_bobiz(char *str, char c);
char	*ft_strdup(char *str);

#endif
