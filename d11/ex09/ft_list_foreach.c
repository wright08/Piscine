/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:34:06 by rwright           #+#    #+#             */
/*   Updated: 2019/01/22 14:38:24 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *head, void (*f)(void *))
{
	t_list	*ptr;

	ptr = head;
	while (ptr)
	{
		(*f)(ptr->data);
		ptr = ptr->next;
	}
}
