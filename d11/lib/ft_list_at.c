/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 12:46:01 by rwright           #+#    #+#             */
/*   Updated: 2019/01/22 12:54:16 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *head, unsigned int n)
{
	while (n-- > 0 && head->next)
		head = head->next;
	if (head == 0)
		return ((void *)0);
	return (head);
}
