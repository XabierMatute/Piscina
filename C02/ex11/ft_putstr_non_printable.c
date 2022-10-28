/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:52:00 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/13 19:20:07 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	puthxd(char c)
{
	char	d1;
	char	d2;

	d1 = c / 16;
	d2 = c % 16;
	d1 = '0' + d1;
	write(1, &d1, 1);
	if (d2 < 10)
		d2 = '0' + d2;
	else
		d2 = 'a' + d2 - 10;
	write(1, &d2, 1);
}

void	ft_putnp(char c)
{
	write(1, "\\", 1);
	if (c == -128)
	{
		write(1, "-80", 4);
	}
	else
	{
		if (c < 0)
		{
			write(1, "-", 1);
			c = c * (-1);
		}
		puthxd(c);
	}
}

void	ft_putstr_non_printable(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = str[i];
	while (c != 0)
	{
		if (!((str[i] < ' ') || (str[i] > '~')))
			write(1, &c, 1);
		else
			ft_putnp(c);
		i++;
		c = str[i];
	}
}
