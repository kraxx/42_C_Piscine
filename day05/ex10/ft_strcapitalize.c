/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 20:26:00 by jchow             #+#    #+#             */
/*   Updated: 2017/04/10 22:37:24 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		return (*c -= 32);
	return (0);
}

char	to_lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		return (*c += 32);
	return (0);
}

int		is_alphanumeric(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int toggle;

	i = 0;
	toggle = 1;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]) && toggle == 1)
		{
			to_upper(&str[i]);
			toggle = 0;
		}
		else if (is_alphanumeric(str[i]))
			to_lower(&str[i]);
		else
			toggle = 1;
		i++;
	}
	return (str);
}
