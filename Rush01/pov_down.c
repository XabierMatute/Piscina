/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pov2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:58:00 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/10 22:16:55 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*line(int n, char *l);
char	boxes(char c1, char c2, char c3, char c4);

int	pov_down(char s[4], char inputs[31])
{
	char	*l1;
	char	*l2;
	char	*l3;
	char	*l4;

	l1 = "1234";
	l2 = "1234";
	l3 = "1234";
	l4 = "1234";
	l1 = line(s[0], l1);
	l2 = line(s[1], l2);
	l3 = line(s[2], l3);
	l4 = line(s[3], l4);
	if (boxes(l4[0], l3[0], l2[0], l1[0]) != inputs[0 + 4])
		return (1);
	if (boxes(l4[1], l3[1], l2[1], l1[1]) != inputs[1 + 4])
		return (2);
	if (boxes(l4[2], l3[2], l2[2], l1[2]) != inputs[2 + 4])
		return (3);
	if (boxes(l4[3], l3[3], l2[3], l1[3]) != inputs[3 + 4])
		return (4);
	return (0);
}
