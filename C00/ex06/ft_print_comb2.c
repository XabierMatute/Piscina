/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:52:45 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/08 02:16:06 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putcharr(char c)
{
	write (1, &c, 1);
}

void	ft_printcomb2(char a, char b, char c, char d)
{
	if ((a != c || b != d) && (a < c || (a == c && b < d)))
	{
		ft_putcharr(a);
		ft_putcharr(b);
		ft_putcharr(' ');
		ft_putcharr(c);
		ft_putcharr(d);
		if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		{
			ft_putcharr(',');
			ft_putcharr(' ');
		}
	}
}

void	ft_n2(char a, char b)
{
	char	c;
	char	d;

	c = '0';
	while (c <= '9')
	{
		d = '0';
		while (d <= '9')
		{
			ft_printcomb2(a, b, c, d);
			d++;
		}
		c++;
	}
}

int	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '8')
		{
			ft_n2(a, b);
			b++;
		}
	a++;
	}
	return (0);
}
