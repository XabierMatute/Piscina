/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writemillions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:09:09 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/17 17:37:56 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr02.h"

void	writemillion(char n[9], char **nu, char **na)
{
	if ((n[0] == '0') && (n[1] == '0') && (n[2] == '0'))
		writethousand(&n[3], nu, na);
	else if (n[0] <= '9')
	{
		writehundred(n, nu, na);
		write(1, " ", 1);
		ft_putstr(na[where(nu, "1000000")]);
		if (ft_zerocomp(&n[3]) != 0)
			write(1, " ", 1);
		writethousand(&n[3], nu, na);
	}
	else
		write(1, "Error\n", 6);
}

void	writebillion(char n[12], char **nu, char **na)
{
	if ((n[0] == '0') && (n[1] == '0') && (n[2] == '0'))
		writemillion(&n[3], nu, na);
	else if (n[0] <= '9')
	{
		writehundred(n, nu, na);
		write(1, " ", 1);
		ft_putstr(na[where(nu, "1000000000")]);
		if (ft_zerocomp(&n[3]) != 0)
			write(1, " ", 1);
		writemillion(&n[3], nu, na);
	}
	else
		write(1, "Error\n", 6);
}

void	writetrillion(char n[15], char **nu, char **na)
{
	if ((n[0] == '0') && (n[1] == '0') && (n[2] == '0'))
		writebillion(&n[3], nu, na);
	else if (n[0] <= '9')
	{
		writehundred(n, nu, na);
		write(1, " ", 1);
		ft_putstr(na[where(nu, "1000000000000")]);
		if (ft_zerocomp(&n[3]) != 0)
			write(1, " ", 1);
		writebillion(&n[3], nu, na);
	}
	else
		write(1, "Error\n", 6);
}

void	writequadrillion(char n[18], char **nu, char **na)
{
	if ((n[0] == '0') && (n[1] == '0') && (n[2] == '0'))
		writetrillion(&n[3], nu, na);
	else if (n[0] <= '9')
	{
		writehundred(n, nu, na);
		write(1, " ", 1);
		ft_putstr(na[where(nu, "1000000000000000")]);
		if (ft_zerocomp(&n[3]) != 0)
			write(1, " ", 1);
		writetrillion(&n[3], nu, na);
	}
	else
		write(1, "Error\n", 6);
}

void	writequintillion(char n[21], char **nu, char **na)
{
	if ((n[0] == '0') && (n[1] == '0') && (n[2] == '0'))
		writequadrillion(&n[3], nu, na);
	else if (n[0] <= '9')
	{
		writehundred(n, nu, na);
		write(1, " ", 1);
		ft_putstr(na[where(nu, "1000000000000000000")]);
		if (ft_zerocomp(&n[3]) != 0)
			write(1, " ", 1);
		writequadrillion(&n[3], nu, na);
	}
	else
		write(1, "Error\n", 6);
}
