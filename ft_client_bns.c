/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client_bns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:07:08 by oqatim            #+#    #+#             */
/*   Updated: 2022/03/05 18:12:47 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bns.h"

extern int	g_checksum;

static	void	mt_kill(int pid, char *str)
{
	int		bites;
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		bites = 7;
		c = str[i];
		while (bites >= 0)
		{
			if (c >> bites & 1)
				kill(pid, SIGUSR2);
			else
				kill (pid, SIGUSR1);
			g_checksum++;
			usleep(800);
			bites--;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		pid;

	if (argc != 3)
	{
		ft_printf("wrong the argument\n");
		return (0);
	}
	pid = ft_atoi(argv[1]);
	mt_kill(pid, argv[2]);
	if ((g_checksum / g_checksum) == 1)
		ft_printf("your data is received");
	else
		ft_printf("your data is not received");
}
