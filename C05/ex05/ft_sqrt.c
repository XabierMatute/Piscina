/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:53:53 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/21 16:32:57 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	sq;
	unsigned int	n;
	unsigned int	i;

	if (nb <= 0)
		return (0);
	n = nb;
	i = 0;
	sq = 0;
	while (sq <= n)
	{
		sq = i * i;
		if (sq == n)
			return (i);
		i++;
	}
	return (0);
}
