/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:25:43 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/07 22:51:17 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	b10(int n)
{
	int				i;
	unsigned int	p;

	if (n == 0)
		return (1);
	i = 1;
	p = 10;
	while (i < n)
	{
		p = 10 * p;
		i++;
	}
	return (p);
}

int	ft_long(int num)
{
	int	l;

	if (num == 0)
		return (0);
	l = 1;
	while ((num / b10 (l)) != 0)
	{
		l++;
	}
	return (l);
}

void	ft_putdigit(int d)
{
	char	c;

	c = '0' + d;
	write(1, &c, 1);
}

void	ft_general(int nb)
{
	int	l;
	int	i;
	int	p;
	int	d;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	l = ft_long (nb);
	if (l == 0)
		ft_putdigit (0);
	else
	{		
		i = 1;
		while (i <= l)
		{
			p = b10 (l - i);
			d = nb / p;
			nb = nb % p;
			ft_putdigit (d);
				i++;
		}
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb == 2147483647)
	{
		write(1, "2147483647", 10);
	}
	else
		ft_general(nb);
}
