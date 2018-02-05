/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aucastil <austillo@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 18:40:26 by aucastil          #+#    #+#             */
/*   Updated: 2017/04/23 22:16:47 by aucastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <stdlib.h>

char 	*rush_zero(int x, int y);
char	*rush_one(int x, int y);
char	*rush_two(int x, int y);
char	*rush_three(int x, int y);
char	*rush_four(int x, int y);

typedef char *(*t_rush_ptr)(int, int);

t_rush_ptr g_rush_ptr_array[] =
{
	&rush_zero,
	&rush_one,
	&rush_two,
	&rush_three,
	&rush_four
};

#endif
