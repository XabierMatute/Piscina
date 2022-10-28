/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:01:41 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/08 02:49:15 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putcchar(char c)

{
	write(1, &c, 1);
}

unsigned int	p10(int n)
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

void	ft_putdigitt(int d)
{
	char	c;

	c = '0' + d;
	write(1, &c, 1);
}

int	cond(int i, int n)
{
	int	k;

	k = n;
	while (k > 1)
	{
		if (i / p10(k - 1) >= (i % p10(k - 1) / p10(k - 1 - 1)))
			return (42);
		i = i % p10(k - 1);
		k--;
	}
	return (0);
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	int	ii;

	i = 1;
	while (i < p10(n))
	{
		j = n;
		if (cond(i, n) == 0)
		{
			if (i != 1)
				write(1, ", ", 1);
				ii = i;
			while (j >= 1)
			{
				ft_putdigitt(ii / p10(j - 1));
				ii = ii % p10(j - 1);
				j--;
			}
		}
		i++;
	}
}
