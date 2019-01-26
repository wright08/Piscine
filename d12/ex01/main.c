/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 18:12:00 by rwright           #+#    #+#             */
/*   Updated: 2019/01/24 08:30:45 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>

#define BUFF_SIZE 4096

void	ft_read_write(int input, int output)
{
	char	buff[BUFF_SIZE];
	int		bytes_read;

	while ((bytes_read = read(input, buff, BUFF_SIZE)) > 0)
		write(output, buff, bytes_read);
	close(input);
}

int		ft_strlen(const char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_print_err(char *arg, int err)
{
	write(2, "ft_cat: ", 8);
	write(2, arg, ft_strlen(arg));
	write(2, ": ", 2);
	write(2, sys_errlist[err], ft_strlen(sys_errlist[err]));
	write(2, "\n", 1);
}

int		ft_try_dir(char *arg)
{
	int fd;

	if ((fd = open(arg, O_DIRECTORY)) > 0)
	{
		close(fd);
		errno = EISDIR;
		return (1);
	}
	return (0);
}

#include <stdio.h>
int		main(int argc, char **argv)
{
	int		fd;
	int		i;

	if (argc == 1)
		ft_read_write(0, 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			if (*argv[i] == '-')
				ft_read_write(0, 1);
			else
			{
				if (ft_try_dir(argv[i]))
					ft_print_err(argv[i], errno);
				else if ((fd = open(argv[i], O_RDONLY)) > 0)
					ft_read_write(fd, 1);
				else
					ft_print_err(argv[i], errno);
			}
			i++;
		}
	}
	return (0);
}
