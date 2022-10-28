/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:31:48 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/20 19:04:05 by xmatute-         ###   ########.fr       */
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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	b;

	b = ft_strlen(base);
	if ((b > 1) && (letrasrepes(base) == 0))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = nbr * -1;
		}
		recursive(nbr, base, b);
	}
}

/*int		main(void)
{
	int	i;

	i = 0;
	while (i <= 255)
	{
		ft_putnbr_base(i, "0123456789");
		write(1, " ", 1);
		ft_putnbr_base(i, "0123456789abcdef");
		write(1, " ", 1);
		ft_putnbr_base(i, "01");
		write(1, " ", 1);
		ft_putnbr_base(i, "mauri");
		write(1, "\n", 1);
		i++;
	}
	return 0;
}*/
