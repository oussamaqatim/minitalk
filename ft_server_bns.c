/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server_bns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:07:23 by oqatim            #+#    #+#             */
/*   Updated: 2022/03/05 18:44:21 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bns.h"

extern int	g_checksum;

static void	handler_msg(int sig)
{
	static char	c = 0xff;
	static int	bites = 0;

	if (sig == SIGUSR1)
	{
		c ^= 128 >> bites;
		g_checksum++;
	}
	else
	{
		c |= 128 >> bites;
		g_checksum++;
	}
	if (++bites == 8)
	{
		ft_printf(&c);
		c = 0xff;
		bites = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("PID = %d \n", getpid());
	while (1)
	{
		signal(SIGUSR1, handler_msg);
		signal(SIGUSR2, handler_msg);
		pause();
	}
}
