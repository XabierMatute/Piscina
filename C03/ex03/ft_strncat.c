/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:43:41 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/14 20:23:39 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlenn(char *str)
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dl;
	unsigned int	ol;

	dl = ft_strlenn(dest);
	ol = ft_strlenn(src);
	i = 0;
	while ((i < ol) && (i < nb))
	{
		dest[i + dl] = src[i];
		i++;
	}
	return (dest);
}
