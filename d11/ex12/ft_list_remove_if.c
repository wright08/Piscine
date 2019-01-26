/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 16:24:05 by rwright           #+#    #+#             */
/*   Updated: 2019/01/23 09:28:27 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **head, void *data_ref, int (*cmp)())
{
	t_list	*ptr;
	t_list	*next;
	t_list	*prev;

	prev = 0;
	ptr = *head;
	while (*head)
	{
		next = (*head)->next;
		if ((*cmp)(data_ref, (*head)->data) == 0)
		{
			if (prev)
				prev->next = next;
			else
				ptr = (*head)->next;
			free(*head);
		}
		else
			prev = *head;
		*head = next;
	}
	*head = ptr;
}
