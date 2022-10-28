/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:50:26 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/13 19:16:25 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alfanumeric(char c)
{
	if ((c <= 'z') && (c >= 'a'))
		return (1);
	if ((c <= 'Z') && (c >= 'A'))
		return (1);
	if ((c <= '9') && (c >= '0'))
		return (1);
	return (0);
}

char	*ft_strlowcasee(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strupcapitalcase(char *str)
{
	int		i;

	i = 0;
	if ((str[i] >= 'a') && (str[i] <= 'z'))
		str[i] = str[i] - 32;
	i++;
	while (str[i] != 0)
	{
		if (!alfanumeric(str[i - 1]))
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] = str[i] - 32;
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	str = ft_strlowcasee(str);
	str = ft_strupcapitalcase(str);
	return (str);
}
