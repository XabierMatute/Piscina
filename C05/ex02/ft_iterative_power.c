/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:33:55 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/21 16:32:34 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	unsigned int	p;
	unsigned int	n;
	unsigned int	i;

	if (power == 0)
		return (1);
	if ((nb == 0) || (power < 0))
		return (0);
	p = 1;
	n = power;
	i = 1;
	while (i <= n)
	{
		p = p * nb;
		i++;
	}
	return (p);
}
