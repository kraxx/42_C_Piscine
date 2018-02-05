/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 02:46:57 by jchow             #+#    #+#             */
/*   Updated: 2017/04/20 22:46:31 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUF_SIZE 28

void	stdin_mode(void)
{
	char	buf[BUF_SIZE + 1];
	int		ret;

	while ((ret = read(0, buf, BUF_SIZE)))
		write(1, buf, ret);
}

void	no_file(char *str)
{
	ft_putstr("ft_cat: ");
	ft_putstr(str);
	ft_putstr(": No such file or directory\n");
}

void	dir_error(char *str)
{
	ft_putstr("ft_cat: ");
	ft_putstr(str);
	ft_putstr(": Is a directory\n");
}

int		ft_cat(char *file)
{
	char	buf[BUF_SIZE + 1];
	int		fd;
	int		ret;

	fd = open(file, O_RDONLY);
	if (fd >= 0)
	{
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			if (ret == -1)
			{
				dir_error(file);
				return (errno);
			}
			write(1, buf, ret);
		}
	}
	else
	{
		no_file(file);
		return (errno);
	}
	close(fd);
	return (1);
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		stdin_mode();
	i = 1;
	while (i < argc)
	{
		ft_cat(argv[i]);
		i++;
	}
	return (0);
}
