/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_comb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:16:24 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/10 22:15:06 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	eureka(char *s);
int	mcond(char *s, char *inputs);

int	ft_comb(char s[4], char inputs[16])
{
	if (mcond(s, inputs) == 0)
	{
		eureka(s);
		return (0);
	}
	return (42);
}

char	ft_loopcc(char s[4], char inputs[16])
{
	s[2] = 1;
	while (s[2] <= 24)
	{
		s[3] = 1;
		if ((s[1] != s[2]) && (s[2] != s[0]))
		{
			while (s[3] <= 24)
			{
				{
					if ((s[3] != s[0]) && (s[3] != s[1]) && (s[3] != s[2]))
						if (ft_comb(s, inputs) == 0)
							return (0);
					s[3]++;
				}
			}
		}	
		s[2]++;
	}
	return (13);
}

int	ft_find_comb(char inputs[16])
{
	char	s[4];
	char	c;

	s[0] = 1;
	while (s[0] <= 24)
	{
		s[1] = 1;
		while (s[1] <= 24)
		{
			if (s[1] != s[0])
			{
				c = ft_loopcc(s, inputs);
				if (c == 0)
					return (0);
			}
			s[1]++;
		}
		s[0]++;
	}
	return (42);
}
