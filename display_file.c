/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzulma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:26:27 by jzulma            #+#    #+#             */
/*   Updated: 2021/06/22 00:57:15 by jzulma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	display(int fd)
{
	char	buf;

	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
}

int	main(int	idk, char	**miss)
{
	int	fd;

	fd = (open(miss[1], O_RDONLY));
	if (idk !=2)
	{
		if (idk > 2)
			write(2, "Too many arguments.\n", 20);
		if (idk < 2)
			write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (fd == -1)
		write(2, "Cannot read file.\n", 20);
	else
	{
		display(fd);
		close(fd);
		return (0);
	}
}
