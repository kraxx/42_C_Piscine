/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 15:19:18 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/26 15:35:11 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_io.h"

int		**handle_buffer(char *block, int fd)
{
	char	*str;
	int		i;
	int		read_size;
	char	buff[BUFF_SIZE + 1];
	int		**tab;

	str = get_dim(fd);
	if (str == 0)
		return (NULL);
	tab = make_tab();
	i = 0;
	i = handle_first_buff(str, block, tab, i);
	if (i == -1)
		return (NULL);
	while ((read_size = read(fd, buff, BUFF_SIZE)))
	{
		buff[read_size] = '\0';
		i = handle_first_buff(buff, block, tab, i);
		if (i == -1)
			return (NULL);
	}
	return (tab);
}

int		fif(char *s, int j, int *lastnl)
{
	if (s[j] == '\n')
	{
		if (*lastnl != g_dimension[1])
		{
			*lastnl = 0;
			return (-1);
		}
		*lastnl = 0;
	}
	return (0);
}

int		handle_first_buff(char *s, char *block, int **tab, int i)
{
	int			j;
	static int	lastnl = 0;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] != block[0] && s[j] != block[2] && s[j] != '\n')
		{
			lastnl = 0;
			return (-1);
		}
		if (s[j] == block[2])
			percolation(tab, (i + j) % (g_dimension[1] + 1),
					(i + j) / (g_dimension[1] + 1));
		if (fif(s, j, &lastnl) == -1)
			return (-1);
		if (s[j] != '\n')
			lastnl++;
		j++;
	}
	return (i + j);
}

char	*get_dim(int fd)
{
	char	buff[BUFF_SIZE + 1];
	char	*s1;
	int		r[2];
	int		cut;

	cut = 0;
	s1 = ft_malloc_zero(cut + 1);
	while ((r[0] = read(fd, buff, BUFF_SIZE)))
	{
		g_dimension[1] = 0;
		s1 = ft_update(buff, s1, &cut, r[0]);
		r[1] = 0;
		while (s1[r[1]] != '\0')
		{
			if (s1[r[1]] == '\n')
			{
				return (s1);
			}
			g_dimension[1] = g_dimension[1] + 1;
			r[1]++;
		}
	}
	return (0);
}

int		first_line(char *empty, char *full, char *obstacle, int fd)
{
	char	buff[2];
	char	*tmp;
	int		read_size;

	tmp = ft_malloc_zero(1); //tmp = '\0'
	read_size = read(fd, buff, 1); //read from stdin when fd = 0
	if (read_size == 0 || (buff[0] < '1' || buff[0] > '9'))
		return (-1);
	buff[read_size] = '\0';
	while (buff[0] >= '0' && buff[0] <= '9')
	{
		tmp = ft_update2(buff, tmp);
		read_size = read(fd, buff, 1);
		buff[read_size] = '\0';
	}
	g_dimension[0] = atoi(tmp);
	free(tmp);
	empty[0] = buff[0];
	read(fd, full, 1); //?
	read(fd, obstacle, 1); //?
	read_size = read(fd, buff, 1);
	if (read_size == 0 || buff[0] != '\n')
		return (-1);
	return (0);
}
