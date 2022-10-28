/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   where.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:56:47 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/17 21:44:59 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr02.h"

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != 0) || (s2[i] != 0))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	where(char **list, char what[32])
{
	unsigned int	i;

	i = 0;
	while (list[i] != 0)
	{
		if (ft_strcmp(list[i], what) == 0)
			return (i);
		i++;
	}
	ft_dicerror();
	return (-1);
}
