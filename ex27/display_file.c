/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:22:34 by itkimura          #+#    #+#             */
/*   Updated: 2021/10/29 16:25:36 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_open(char *str)
{
	int		fd;
	char	buffer;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (0);
	else
	{
		while (read(fd, &buffer, 1))
			write(1, &buffer, 1);
		if (close(fd) == -1)
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	argv++;
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	else if (!ft_open(*argv))
		return (1);
	return (0);
}
