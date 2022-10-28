/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:16:24 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/06 18:04:05 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_comb(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a < '7')
	{
		write (1, ",", 1);
		write (1, " ", 1);
	}
}

char	ft_buclec(int a, int b)
{
	char	c;

	c = b;
	while (c <= '9')
	{
		if (c != a)
		{
			if (c != b)
				ft_comb(a, b, c);
		}	
					c++;
	}
	return (c);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a;
		while (b <= '8')
		{
			if (b != a)
				c = ft_buclec(a, b);
			b++;
		}
		a++;
	}
}
