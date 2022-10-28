/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:09:56 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/21 16:30:14 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	f;
	unsigned int	i;
	unsigned int	n;

	if (nb < 0)
		return (0);
	n = nb;
	f = 1;
	i = 1;
	while (i <= n)
	{
		f = f * i;
		i++;
	}
	return (f);
}
