/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   changestr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:09:18 by ibosque-          #+#    #+#             */
/*   Updated: 2022/07/17 18:38:39 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr02.h"

char	*ft_changestr(char *value, char **nu, char **na)

{
	int		i;
	int		j;
	int		l;
	char	*gv;
	char	c;

	c = '0';
	gv = &c;
	gv = malloc(sizeof(char) * 40);
	l = ft_strlen(value) + 1;
	i = 0;
	j = 0;
	while (j < 40 - l)
	{
		gv[j] = '0';
		j++;
	}
	while ((j <= 40) && (i < l))
	{
		gv[j] = value[i];
		i++;
		j++;
	}
	writeundecillion(gv, nu, na);
	return (gv);
}
