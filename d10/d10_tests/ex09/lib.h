/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 13:55:24 by rwright           #+#    #+#             */
/*   Updated: 2019/01/21 17:59:35 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
#include <unistd.h>

typedef void (*op_fp)(int, int);
typedef struct	s_opp
{
	char *opp;
	op_fp op_fun;
}				t_opp;

/* UTIL */
void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_strcmp(char *s1, char *s2);

/* MATH */
void	ft_add(int a, int b);
void	ft_sub(int a, int b);
void	ft_mul(int a, int b);
void	ft_div(int a, int b);
void	ft_mod(int a, int b);

/* OPP */
void	ft_usage(int a, int b);
op_fp	get_opp(char *opp);
op_fp	get_usage(void);

#endif
