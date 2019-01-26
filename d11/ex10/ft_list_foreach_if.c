/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:42:44 by rwright           #+#    #+#             */
/*   Updated: 2019/01/22 15:00:27 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *head, void (*f)(void *),
		void *data_ref, int (*cmp)(void *, void *))
{
	t_list	*ptr;

	ptr = head;
	while (ptr)
	{
		if ((*cmp)(data_ref, ptr->data) == 0)
			(*f)(ptr->data);
		ptr = ptr->next;
	}
}
