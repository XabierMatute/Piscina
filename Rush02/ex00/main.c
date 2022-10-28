/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   protomain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:59:38 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/17 17:23:32 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libr02.h"

int	main(int argc, char **argv)
{
	int	error;

	if (argc == 2)
	{
		error = one_imput(argv[1]);
		if (error == 0)
			return (0);
	}
	else if (argc == 3)
	{
		error = two_imputs(argv[1], argv[2]);
		if (error == 0)
			return (0);
	}
	write(1, "Error\n", 6);
	return (1);
}
