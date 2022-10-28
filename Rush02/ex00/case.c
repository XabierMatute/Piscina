/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:20:06 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/17 18:47:23 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr02.h"

int	one_imput(char	*value)
{
	if (two_imputs("numbers.dict", value) == 0)
		return (0);
	return (1);
}

int	two_imputs(char *dic, char *value)
{
	int	ve;

	ve = ft_valuecont(value);
	if ((ve == 1) && (ft_zero(value) != 0))
		return (1);
	else if (ve == -1)
	{
		ft_dicerror();
		return (0);
	}
	if (diccionary(dic, value) == 0)
		return (0);
	ft_dicerror();
	return (0);
}

int	diccionary(char *dic, char *value)
{
	char	**na;
	char	**nu;
	char	c;
	char	*s;
	int		i;

	s = &c;
	na = &s;
	nu = na + 1;
	i = ft_read_file(dic, &nu, &na);
	if (i == -1)
		return (-1);
	nu[i] = "\0";
	na[i] = "\0";
	if (ft_zero(value) == 0)
	{
		writezero(nu, na);
		return (0);
	}
	writenumber(value, nu, na);
	free(nu);
	free(na);
	return (0);
}

void	writenumber(char *value, char **nu, char **na)
{
	ft_changestr (value, nu, na);
	write(1, "\n", 1);
}

void	ft_dicerror(void)
{
	write(1, "Dict Error\n", 11);
}
