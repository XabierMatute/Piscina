/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:25:04 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/14 16:44:10 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
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

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	dl;
	unsigned int	ol;

	dl = ft_strlen(dest);
	ol = ft_strlen(src);
	i = 0;
	while (i < ol)
	{
		dest[i + dl] = src[i];
		i++;
	}
	return (dest);
}
