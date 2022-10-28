/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:24:21 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/14 20:35:17 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlennn(char *str)
{
	unsigned int		i;
	char				c;

	i = 0;
	c = str[0];
	while (c != 0)
	{
		i++;
		c = str[i];
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dl;
	unsigned int	ol;

	dl = ft_strlennn(dest);
	ol = ft_strlennn(src);
	i = 0;
	while ((i < ol) && (i + dl < size - 1))
	{
		dest[i + dl] = src[i];
		i++;
	}
	dest[i + dl] = 0;
	if (size < dl)
		return (size + ol);
	else
		return (dl + ol);
}
