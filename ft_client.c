/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:50:25 by oqatim            #+#    #+#             */
/*   Updated: 2022/03/05 16:06:49 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_message(int pid, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '0')
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i++;
		usleep(1500);
	}
}

char	*ft_9issma(char *s, int len, int i)
{
	char	*str;
	char	k;
	int		bites;

	str = (char *)malloc(len * 8 + 1);
	if (!str)
		return (NULL);
	str[len * 8] = '\0';
	while (len > 0)
	{
		bites = 8;
		k = s[len - 1];
		while (bites > 0)
		{
			if (k % 2 == 1)
				str[ft_strlen(s) * 8 - i] = '1';
			else
				str[ft_strlen(s) * 8 - i] = '0';
			k = k / 2;
			bites--;
			i++;
		}
		len--;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	int		pid;
	int		len;
	int		i;
	char	*str;

	if (argc != 3)
	{
		printf("khobza\n");
		exit(EXIT_FAILURE);
	}
	len = ft_strlen(argv[2]);
	i = 1;
	pid = ft_atoi(argv[1]);
	str = ft_9issma(argv[2], len, i);
	ft_message(pid, str);
}
