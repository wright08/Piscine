/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 07:26:22 by rwright           #+#    #+#             */
/*   Updated: 2019/01/18 07:40:15 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# define FALSE		0
# define TRUE		!FALSE
# define CLOSE		0
# define OPEN		!CLOSE

typedef int		t_bool;

typedef struct	s_door
{
	int state;
}				t_door;

void			ft_putstr(char *str);
ft_bool			open_door(t_door *door);
ft_bool			close_door(t_door *door);
ft_bool			is_door_open(t_door *door);
ft_bool			is_door_close(t_door *door);

#endif
