/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utilis.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:13:02 by oqatim            #+#    #+#             */
/*   Updated: 2022/03/05 18:45:12 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result);
}

char	*ft_strdup(char *str)
{
	char	*temp;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(str);
	temp = (char *) malloc (sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}
