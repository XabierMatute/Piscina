/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writemoremillions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:09:09 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/17 21:27:40 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr02.h"

void	writesextillion(char n[24], char **nu, char **na)
{
	if ((n[0] == '0') && (n[1] == '0') && (n[2] == '0'))
		writequintillion(&n[3], nu, na);
	else if (n[0] <= '9')
	{
		writehundred(n, nu, na);
		write(1, " ", 1);
		ft_putstr(na[where(nu, "1000000000000000000000")]);
		if (ft_zerocomp(&n[3]) != 0)
			write(1, " ", 1);
		writequintillion(&n[3], nu, na);
	}
	else
		write(1, "Error\n", 6);
}

void	writeseptillion(char n[24], char **nu, char **na)
{
	if ((n[0] == '0') && (n[1] == '0') && (n[2] == '0'))
		writesextillion(&n[3], nu, na);
	else if (n[0] <= '9')
	{
		writehundred(n, nu, na);
		write(1, " ", 1);
		ft_putstr(na[where(nu, "1000000000000000000000000")]);
		if (ft_zerocomp(&n[3]) != 0)
			write(1, " ", 1);
		writesextillion(&n[3], nu, na);
	}
	else
		write(1, "Error\n", 6);
}

void	writeoctillion(char n[30], char **nu, char **na)
{
	if ((n[0] == '0') && (n[1] == '0') && (n[2] == '0'))
		writeseptillion(&n[3], nu, na);
	else if (n[0] <= '9')
	{
		writehundred(n, nu, na);
		write(1, " ", 1);
		ft_putstr(na[where(nu, "1000000000000000000000000000")]);
		if (ft_zerocomp(&n[3]) != 0)
			write(1, " ", 1);
		writeseptillion(&n[3], nu, na);
	}
	else
		write(1, "Error\n", 6);
}

void	writenonillion(char n[33], char **nu, char **na)
{
	if ((n[0] == '0') && (n[1] == '0') && (n[2] == '0'))
		writeoctillion(&n[3], nu, na);
	else if (n[0] <= '9')
	{
		writehundred(n, nu, na);
		write(1, " ", 1);
		ft_putstr(na[where(nu, "1000000000000000000000000000000")]);
		if (ft_zerocomp(&n[3]) != 0)
			write(1, " ", 1);
		writeoctillion(&n[3], nu, na);
	}
	else
		write(1, "Error\n", 6);
}
