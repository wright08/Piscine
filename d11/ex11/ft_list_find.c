/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 15:17:21 by rwright           #+#    #+#             */
/*   Updated: 2019/01/22 16:18:11 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *head, void *data_ref, int (*cmp)())
{
	t_list *ptr;

	ptr = head;
	while (ptr)
	{
		if ((*cmp)(data_ref, ptr->data) == 0)
			return (ptr);
		ptr = ptr->next;
	}
	return (0);
}
