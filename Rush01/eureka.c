/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eureka.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:42:59 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/10 22:14:21 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_str(char *l1, char *l2, char *l3, char *l4);
char	*line(int n, char *l);

void	eureka(char *s)
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
	ft_print_str(l1, l2, l3, l4);
}
