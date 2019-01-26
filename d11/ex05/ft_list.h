/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 06:46:04 by rwright           #+#    #+#             */
/*   Updated: 2019/01/22 12:24:04 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stddef.h>

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

t_list			*ft_create_elem(void *data);
void			ft_list_push_back(t_list **head, void *data);
void			ft_list_push_front(t_list **head, void *data);
int				ft_list_size(t_list *head);
t_list			*ft_list_last(t_list *head);
t_list			*ft_list_push_params(int argc, char **argv);
#endif
