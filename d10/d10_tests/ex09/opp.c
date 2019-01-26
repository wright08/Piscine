/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:00:14 by rwright           #+#    #+#             */
/*   Updated: 2019/01/21 17:58:20 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include "ft_opp.h"

op_fp		get_opp(char *opp)
{
	unsigned long	i;

	i = 0;
	while (i < sizeof(g_opptab) / sizeof(t_opp))
	{
		if (ft_strcmp(g_opptab[i].opp, opp) == 0)
			return (g_opptab[i].op_fun);
		i++;
	}
	return (NULL);
}

op_fp		get_usage()
{
	unsigned long	i;

	i = 0;
	while (i < sizeof(g_opptab) / sizeof(t_opp))
	{
		if (*g_opptab[i].opp == '\0')
			return (g_opptab[i].op_fun);
		i++;
	}
	return (NULL);
}

void	ft_usage(int a, int b)
{
	unsigned long i;

	(void)a;
	(void)b;
	ft_putstr("error : only [ ");
	i = 0;
	while (i < sizeof(g_opptab) / sizeof(t_opp))
	{
		while (*g_opptab[i].opp)
		{
			ft_putchar(*g_opptab[i].opp++);
			ft_putchar(' ');
		}
		i++;
	}
	ft_putstr("] are accepted.\n");
}
