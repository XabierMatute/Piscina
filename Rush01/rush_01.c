/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:34:20 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/10 22:20:56 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		cond_imput(char *imput);

int		ft_find_comb(char *inputs);

void	error(void);

int	main(int argc, char *argv[31])
{
	if (argc != 2)
	{
		error();
		return (1);
	}
	if (cond_imput(argv[1]) != 0)
	{
		error();
		return (2);
	}
	if (ft_find_comb(argv[1]) != 0)
	{
		error();
		return (3);
	}
	return (0);
}
