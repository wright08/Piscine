/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:35:39 by rwright           #+#    #+#             */
/*   Updated: 2019/01/23 17:01:50 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFF_SIZE 4096

void	ft_printerror(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	write(2, str, len);
}

int		main(int argc, char **argv)
{
	char	buffer[BUFF_SIZE];
	int		fd;
	int		bytes_read;

	if (argc == 1)
		ft_printerror("File name missing.\n");
	else if (argc > 2)
		ft_printerror("Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd)
		{
			while ((bytes_read = read(fd, buffer, BUFF_SIZE)) > 0)
				write(1, buffer, bytes_read);
			close(fd);
		}
	}
	return (0);
}
