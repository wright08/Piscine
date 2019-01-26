/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 14:03:08 by rwright           #+#    #+#             */
/*   Updated: 2019/01/21 18:30:23 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		main(int argc, char **argv)
{
	op_fp op;

	if (argc != 4)
		return (1);
	op = get_opp(argv[2]);
	if (op)
		(*op)(ft_atoi(argv[1]), ft_atoi(argv[3]));
	else
		(*get_usage())(0, 0);
	return (0);
}
