/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writehundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:09:09 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/17 17:38:03 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr02.h"

void	writehundred(char n[3], char **nu, char **na)
{
	if (n[0] == '0')
		writeten(&n[1], nu, na);
	else if (n[0] <= '9')
	{
		writeunit(n[0], nu, na);
		write(1, " ", 1);
		ft_putstr(na[where(nu, "100")]);
		if ((n[1] != '0') || (n[2] != '0'))
			write(1, " ", 1);
		writeten(&n[1], nu, na);
	}
	else
		write(1, "Error\n", 6);
}
