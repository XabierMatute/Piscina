/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mcond.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:58:38 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/10 20:52:25 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sudoku(char *s);
int	povs(char *s, char *inputs);

int	mcond(char s[4], char inputs[16])
{
	if (sudoku(s) != 0)
		return (42);
	if (povs(s, inputs) != 0)
		return (42);
	return (0);
}
