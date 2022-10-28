/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:15:57 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/10 22:25:44 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*line(int n, char *l);

int	loopsudoku(char *l1, char *l2, char *l3, char *l4)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if ((l1[i] == l2[i]) || (l1[i] == l3[i]) || (l1[i] == l4[i]))
			return (1);
		if ((l2[i] == l3[i]) || (l2[i] == l4[i]))
			return (2);
		if (l3[i] == l4[i])
			return (3);
		i++;
	}
	return (0);
}

int	sudoku(char s[4])
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
	if (loopsudoku(l1, l2, l3, l4) != 0)
		return (42);
	return (0);
}
