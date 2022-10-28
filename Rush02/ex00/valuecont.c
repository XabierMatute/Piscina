/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valuecont.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:19:13 by ibosque-          #+#    #+#             */
/*   Updated: 2022/07/17 18:58:17 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr02.h"

int	ft_valuecont(char *value)

{
	int	i;

	i = 0;
	if (value[i] > '0' && value[i] <= '9')
		i++;
	else
		return (1);
	while (value[i] != '\0')
	{
		if (value[i] >= '0' && value[i] <= '9')
			i++;
		else
			return (1);
	}	
	if (i > 39)
		return (-1);
	else
		return (0);
}
