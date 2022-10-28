/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writeunit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:42:42 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/17 21:22:58 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr02.h"

void	writeunit(char n, char **nu, char **na)
{
	char	u[2];

	u[0] = n;
	u[1] = '\0';
	if (n != '0')
		ft_putstr(na[where(nu, u)]);
}

void	writezero(char **nu, char **na)
{
	char	u[2];

	u[0] = '0';
	u[1] = '\0';
	ft_putstr(na[where(nu, u)]);
	write(1, "\n", 1);
}
