/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:08:57 by jchow             #+#    #+#             */
/*   Updated: 2017/04/07 23:05:06 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_reverser(char *str, int i)
{
  char *rev;
  int j;

  j = 0;
  while (i >= 0)
  {
    rev[j] = str[i];
    i--;
    j++;
  }
  *str = *rev;
}

void	ft_strrev(char *str)
{
	int i;

  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  i--;
  ft_reverser(str, i);

  i = 0;
  while (i != '\0')
  {
    ft_putchar(str[i]);
  }
}
