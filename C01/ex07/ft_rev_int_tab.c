/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:29:25 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/11 19:29:18 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swwap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swwap(&tab[size - i -1], &tab[i]);
		i++;
	}
}
