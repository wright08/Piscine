/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 09:20:25 by rwright           #+#    #+#             */
/*   Updated: 2019/01/15 09:34:11 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	while (argc-- > 1)
	{
		i = 0;
		while (argv[argc][i])
			ft_putchar(argv[argc][i++]);
		ft_putchar('\n');
	}
	return (0);
}
