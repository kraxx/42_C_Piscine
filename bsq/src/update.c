/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 05:27:02 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/26 15:21:59 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_io.h"

char	*ft_update(char *buff, char *s, int *cut, int r)
{
	char *tmp;

	buff[r] = '\0';
	*cut = *cut + r;
	tmp = ft_malloc_zero(*cut + 1);
	ft_strcpy(tmp, s);
	free(s);
	s = ft_malloc_zero(*cut + 1);
	ft_strcpy(s, tmp);
	s = ft_append(s, buff);
	free(tmp);
	return (s);
}

char	*ft_update2(char *buff, char *tmp)
{
	char		*str;
	static int	cut = 0;

	cut = cut + 1;
	str = ft_malloc_zero(cut + 1);
	ft_strcpy(str, tmp);
	free(tmp);
	tmp = ft_malloc_zero(cut + 1);
	ft_strcpy(tmp, str);
	tmp = ft_append(tmp, buff);
	free(str);
	return (tmp);
}
