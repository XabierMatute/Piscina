/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:50:16 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/17 18:01:16 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr02.h"

void	ft_putstr(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = str[0];
	while (c != 0)
	{
		write(1, &c, 1);
		i++;
		c = str[i];
	}
}

int	ft_strlen(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = str[0];
	while (c != 0)
	{
		i++;
		c = str[i];
	}
	return (i);
}
