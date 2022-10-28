/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libr02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:08:40 by xmatute-          #+#    #+#             */
/*   Updated: 2022/07/17 21:34:52 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBR02_H
# define LIBR02_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <stdlib.h>
# include <sys/types.h>

int		ft_zerocomp(char *strzero);
int		ft_zero(char *value);
int		one_imput(char *value);
int		two_imputs(char *dic, char *value);
int		ft_valuecont(char *value);
int		ft_read_file(char *filename, char ***nu, char ***na);
int		where(char **list, char *what);
int		diccionary(char *dic, char *value);
int		ft_strlen(char *str);
char	*ft_changestr(char *value, char **nu, char **na);

void	error(void);
void	ft_dicerror(void);
void	ft_putstr(char *str);
void	writezero(char **nu, char **na);
void	writenumber(char *value, char **nu, char **na);
void	writeunit(char n, char **nu, char **na);
void	writeten(char n[2], char **nu, char **na);
void	writehundred(char n[3], char **nu, char **na);
void	writethousand(char n[4], char **nu, char **na);
void	writequintillion(char n[21], char **nu, char **na);
void	writenonillion(char n[33], char **nu, char **na);
void	writeundecillion(char n[39], char **nu, char **na);

#endif