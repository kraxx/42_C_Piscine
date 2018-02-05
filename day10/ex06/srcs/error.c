/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 23:42:07 by jchow             #+#    #+#             */
/*   Updated: 2017/04/18 01:44:13 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	div_error(void)
{
	ft_putstr("Stop : division by zero\n");
	return (0);
}

int	mod_error(void)
{
	ft_putstr("Stop : modulo by zero\n");
	return (0);
}
