/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:08:34 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/13 15:04:17 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = str[0];
	while (c != 0)
	{
		i++;
		c = str[i];
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int c)
{
	unsigned int	i;
	unsigned int	r;

	r = ft_strlen(src);
	i = 0;
	while ((src[i] != 0) && (i < c - 1))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < c)
	{
		dest[i] = 0;
		i++;
	}
	return (r);
}
