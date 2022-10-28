/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:27:57 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/20 19:01:23 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	n;
	int				s;

	i = 0;
	s = 1;
	n = 0;
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == 32))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	i--;
	while ((str[++i] >= '0') && (str[i] <= '9'))
	{
		n = 10 * n + (str[i] - '0');
	}
	return (s * n);
}

/*int main(void)
{
	printf("%d", ft_atoi(" +-+1234546545"));
	return 0;
}*/
