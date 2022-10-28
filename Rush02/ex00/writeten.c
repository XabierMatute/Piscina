/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writeten.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:51:38 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/17 17:34:53 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr02.h"

void	writeteen(char n[2], char **nu, char **na)
{
	char	d[3];

	d[0] = n[0];
	d[1] = n[1];
	d[2] = '\0';
	ft_putstr(na[where(nu, d)]);
}

void	writeten(char n[2], char **nu, char **na)
{
	char	d[3];

	d[0] = n[0];
	d[1] = '0';
	d[2] = '\0';
	if (n[0] == '0')
		writeunit(n[1], nu, na);
	else if (n[0] == '1')
		writeteen(n, nu, na);
	else if (n[0] <= '9')
	{
		ft_putstr(na[where(nu, d)]);
		if (n[1] != '0')
			write(1, " ", 1);
		writeunit(n[1], nu, na);
	}
	else
		write(1, "Error\n", 6);
}
