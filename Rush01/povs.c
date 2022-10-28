/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   povs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:33:49 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/10 22:20:01 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	pov_up(char *s, char *inputs);
int	pov_down(char *s, char *inputs);
int	pov_left(char *s, char *inputs);
int	pov_right(char *s, char *inputs);

int	povs(char s[4], char inputs[16])
{
	if (pov_up(s, inputs) != 0)
		return (1);
	if (pov_down(s, inputs) != 0)
		return (2);
	if (pov_left(s, inputs) != 0)
		return (3);
	if (pov_right(s, inputs) != 0)
		return (4);
	return (0);
}
