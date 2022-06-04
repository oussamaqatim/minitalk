/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 04:35:31 by oqatim            #+#    #+#             */
/*   Updated: 2022/03/04 19:13:34 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_minitalk	g_list;

void	ft_convert(char *s)
{
	int				j;
	int				i;
	unsigned char	c;

	j = 1;
	c = 0;
	i = (int)ft_strlen(s) - 1;
	while (i > 0)
	{
		c += j * (s[i] - '0');
		j *= 2;
		i--;
	}
	write(1, &c, 1);
}

char	*ft_bobiz(char *str, char c)
{
	char	*temp;
	int		i;

	temp = malloc (ft_strlen(str) + 2);
	if (!temp)
		return (NULL);
	i = 0;
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = c;
	temp[i + 1] = '\0';
	free(str);
	return (temp);
}

static void	msg(int sig, siginfo_t *info, void *dd)
{
	(void)dd;
	g_list.bitcount++;
	if (g_list.bits == NULL)
	{
		g_list.pid = info->si_pid;
		g_list.bits = ft_strdup("");
		g_list.bitcount = 1;
	}
	if (g_list.pid != info->si_pid)
	{
		free(g_list.bits);
		g_list.bits = ft_strdup("");
		g_list.bitcount = 1;
		g_list.pid = info->si_pid;
	}
	if (sig == SIGUSR2)
		g_list.bits = ft_bobiz(g_list.bits, '1');
	else
		g_list.bits = ft_bobiz(g_list.bits, '0');
	if (g_list.bitcount == 8)
	{
		ft_convert(g_list.bits);
		free(g_list.bits);
		g_list.bits = NULL;
	}
}

int	main(void)
{
	struct sigaction	fiw;

	fiw.sa_sigaction = msg;
	fiw.sa_flags = SA_SIGINFO;
	ft_printf("%d\n", getpid());
	while (1)
	{
		sigaction(SIGUSR1, &fiw, NULL);
		sigaction(SIGUSR2, &fiw, NULL);
		pause();
	}
}
