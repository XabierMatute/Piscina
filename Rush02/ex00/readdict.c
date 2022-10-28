/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readdict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:36:16 by iblanco-          #+#    #+#             */
/*   Updated: 2022/07/17 18:49:52 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr02.h"

char	number(int k, char c, char **nu)
{
	unsigned int	i;

	i = 0;
	*nu = malloc (sizeof(char) * (40));
	while ((c != ':') && (c != ' '))
	{
		if ((c <= '0') && (c > '9'))
			return (0);
		nu[0][i] = c;
		read(k, &c, 1);
		i++;
		if (i == 40)
			return (' ');
	}
	nu[0][i] = 0;
	return (c);
}

char	inter(int *k, char c)
{
	while ((c != ':'))
	{
		if (c != ' ')
			return (0);
		read(*k, &c, 1);
	}
	read(*k, &c, 1);
	while ((c != ' '))
	{
		read(*k, &c, 1);
	}
	return (c);
}

char	names(int *k, char c, char **na)
{
	unsigned int	i;

	i = 0;
	*na = malloc (sizeof(char) * 1000);
	while ((read(*k, &c, 1)) && (c != '\n'))
	{
		na[0][i] = c;
		i++;
	}
	na[0][i] = 0;
	return (c);
}

void	mallocs(char ***nu, char ***na)
{
	*nu = malloc (sizeof(char *) * 10000);
	*na = malloc (sizeof(char *) * 10000);
}

int	ft_read_file(char *filename, char ***nu, char ***na)
{
	int		i;
	char	c;
	int		k;

	i = 0;
	k = open(filename, O_RDONLY);
	if (k < 0)
		return (-1);
	mallocs(&*nu, &*na);
	while (read(k, &c, 1))
	{
		if (c != '\n')
		{
			c = number(k, c, &nu[0][i]);
			if (c == 0)
				return (-1);
			c = inter(&k, c);
			if (c == 0)
				return (-1);
			c = names(&k, c, &na[0][i]);
			i++;
		}
	}
	close(k);
	return (i);
}
