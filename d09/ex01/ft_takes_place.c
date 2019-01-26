/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 18:45:10 by rwright           #+#    #+#             */
/*   Updated: 2019/01/17 20:27:23 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char *m1;
	char *m2;

	if (hour < 12)
		m1 = "A.M.";
	else
		m1 = "P.M.";
	if ((hour + 1) % 24 < 12)
		m2 = "A.M.";
	else
		m2 = "P.M.";
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s\n",
			((hour % 12 == 0) ? 12 : hour % 12), m1,
			(((hour + 1) % 12 == 0) ? 12 : (hour + 1) % 12), m2);
}
