/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 07:00:04 by rwright           #+#    #+#             */
/*   Updated: 2019/01/24 09:50:41 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int		ft_atoi(char *str)
{
	int ret;
	int neg;

	ret = 0;
	while (*str == '\n' || *str == '\t' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if ((neg = *str == '-') || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		ret = ret * 10 + *(str++) - '0';
	return (neg ? -ret : ret);
}

void	ft_tail(char **args)
{
	int BUFF_SIZE;

	BUFF_SIZE = args[0][0] == '+' ? 4096 : -ft_atoi(args[0]);
	(void)BUFF_SIZE;
}

//Handle input errors here and return string with error output
char	**parse_input(int argc, char **argv)
{
	char **ret = malloc(argc * sizeof(size_t));
}

void	print_usage()
{
	write(2, "ft_tail: option requires an argument -- c\n", 42);
	write(2, "usage: ft_tail [-c #] [file ...]\n", 33);
}
int		main(int argc, char **argv)
{
	char **clean_args;
	if (argc == 1)
		return (0);
	clean_args = parse_input(argv);
	ft_tail(clean_args);
	return (0);
}

parse_input(argv);
