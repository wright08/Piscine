/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 07:13:18 by rwright           #+#    #+#             */
/*   Updated: 2019/01/18 07:17:51 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# define SAVE_THE_WORLD	"Go fuck myself"

typedef struct	s_perso
{
	char	*name;
	double	life;
	int		age;
	char	*profession;
}				t_perso;
#endif
