/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cond_imput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:42:56 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/10 22:13:52 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	slength(char *s);

int	spaced(char s[4])
{
	int		i;
	char	c;

	i = 0;
	c = s[0];
	while (c != 0)
	{
		if (!((c <= '4') && (c >= '1')))
			return (42);
		s[i / 2] = s[i];
		i++;
		c = s[i];
		if (c != 0)
		{
			if (c != ' ')
				return (42);
			i++;
			c = s[i];
		}
	}
	return (0);
}

int	cond_imput(char imput[31])
{
	if (slength(imput) != 31)
		return (42);
	if (spaced(imput) != 0)
		return (42);
	return (0);
}
