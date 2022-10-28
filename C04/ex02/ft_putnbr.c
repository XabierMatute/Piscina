/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:31:48 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/21 11:17:49 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = str[0];
	while (c != 0)
	{
		if ((c == '+') || (c == '-'))
			return (0);
		i++;
		c = str[i];
	}
	return (i);
}

int	letrasrepes(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	c = str[0];
	while (c != 0)
	{
		j = i + 1;
		while (str[j] != 0)
		{
			if (str[j] == c)
				return (1);
			j++;
		}
		i++;
		c = str[i];
	}
	return (0);
}

void	recursive(unsigned int nbr, char *base, unsigned int b)
{
	if (nbr < b)
		ft_putchar(base[nbr]);
	else
	{
		recursive(nbr / b, base, b);
		ft_putchar(base[nbr % b]);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		recursive(nb, "0123456789", 10);
	}
}

/*int		main(void)
{
	int	i;

	i = 0;
	while (i <= 255)
	{
		ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}*/
