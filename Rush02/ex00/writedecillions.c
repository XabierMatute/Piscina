/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writedecillions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:50:18 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/17 17:33:40 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr02.h"

void	writedecillion(char n[36], char **nu, char **na)
{
	if ((n[0] == '0') && (n[1] == '0') && (n[2] == '0'))
		writenonillion(&n[3], nu, na);
	else if (n[0] <= '9')
	{
		writehundred(n, nu, na);
		write(1, " ", 1);
		ft_putstr(na[where(nu, "1000000000000000000000000000000000")]);
		if (ft_zerocomp(&n[3]) != 0)
			write(1, " ", 1);
		writenonillion(&n[3], nu, na);
	}
	else
		write(1, "Error\n", 6);
}

void	writeundecillion(char n[39], char **nu, char **na)
{
	if ((n[0] == '0') && (n[1] == '0') && (n[2] == '0'))
		writedecillion(&n[3], nu, na);
	else if (n[0] <= '9')
	{
		writehundred(n, nu, na);
		write(1, " ", 1);
		ft_putstr(na[where(nu, "1000000000000000000000000000000000000")]);
		if (ft_zerocomp(&n[3]) != 0)
			write(1, " ", 1);
		writedecillion(&n[3], nu, na);
	}
	else
		write(1, "Error\n", 6);
}
