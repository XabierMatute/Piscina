/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writethousand.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:09:09 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/17 17:35:07 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr02.h"

void	writethousand(char n[6], char **nu, char **na)
{
	if ((n[0] == '0') && (n[1] == '0') && (n[2] == '0'))
		writehundred(&n[3], nu, na);
	else if (n[0] <= '9')
	{
		writehundred(n, nu, na);
		write(1, " ", 1);
		ft_putstr(na[where(nu, "1000")]);
		if ((n[3] != '0') || (n[4] != '0') || (n[5] != '0'))
			write(1, " ", 1);
		writehundred(&n[3], nu, na);
	}
	else
		write(1, "Error\n", 6);
}
