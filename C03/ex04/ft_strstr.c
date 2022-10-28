/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:23:19 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/14 20:01:14 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == to_find[j])
		{
			while ((str[i] == to_find[j]) && (to_find[j] != 0))
			{
				i++;
				j++;
			}
			if (to_find[j] == 0)
			{
				return (&str[i - j]);
			}
			else
				j = 0;
		}
		i++;
	}
	return (0);
}
