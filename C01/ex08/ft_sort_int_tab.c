/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:28:04 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/11 20:03:47 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swwwap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

void	move(int *tab, int l)
{
	int	i;

	i = 1;
	while (i < l)
	{
		if (tab[i - 1] > tab[i])
			ft_swwwap(&tab[i - 1], &tab[i]);
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = size;
	while (i > 0)
	{
		move(tab, i);
		i--;
	}
}
