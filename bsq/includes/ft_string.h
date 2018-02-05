/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 15:14:19 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/26 15:48:14 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

char	*ft_append(char *s1, char *s2);
void	ft_strcpy(char *dest, char *src);
char	*ft_malloc_zero(int nb);
int		ft_strlen(char *s);
int		**trans_tab(char *tab, int heigth, int width,
		char empty, char obstacle);
#endif
