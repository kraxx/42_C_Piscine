/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 15:09:12 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/26 15:33:42 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H

# include <stdlib.h>
# include <unistd.h>
# define BUFF_SIZE 2

int g_dimension[2];

int		first_line(char *empty, char *full, char *obstacle, int fd);
int		handle_first_buff(char *s, char *block, int **tab, int i);
int		ft_atoi(char *s);
void	make_frame(int **tab, int target, int lenght, int height);
void	percolation(int **tab, int x, int y);
void	print_tab(int **tab, int lenght, int height);
void	recursifg(int **tab, int x, int y, int value);
void	recursifd(int **tab, int x, int y, int value);
void	recursifh(int **tab, int x, int y, int value);
void	recursifb(int **tab, int x, int y, int value);
char	*get_dim(int fd);
int		**make_tab(void);
int		**handle_buffer(char *block, int fd);
void	print_result(int **tab, int *max, char *block);
char	*ft_update(char *buff, char *s, int *cut, int r);
char	*ft_update2(char *buff, char *tmp);
#endif
