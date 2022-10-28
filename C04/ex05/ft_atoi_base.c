/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:50:11 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/20 19:05:24 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

unsigned int	based(char d, char *base)
{
	unsigned int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (d == base [i])
			return (i);
		i++;
	}
	return (4294967295);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	i;
	unsigned int	n;
	int				s;
	unsigned int	b;

	i = 0;
	s = 1;
	n = 0;
	b = ft_strlen(base);
	if (!((b > 1) && (letrasrepes(base) == 0)))
		return (0);
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == 32))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	i--;
	while (based(str[++i], base) != 4294967295)
	{
		n = b * n + based(str[i], base);
	}
	return (s * n);
}

/*int	main(void)
{
	printf("%d", ft_atoi_base(" +-+11111111234546545", "01"));
	return (0);
}*/