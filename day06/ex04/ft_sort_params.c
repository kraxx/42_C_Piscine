/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 21:37:48 by jchow             #+#    #+#             */
/*   Updated: 2017/04/12 18:14:57 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_param(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_sort_params(int size, char **arr)
{
	int		i;
	int		toggle;
	char	*temp;

	toggle = 1;
	while (toggle)
	{
		i = 0;
		toggle = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(arr[i], arr[i + 1]) > 0)
			{
				toggle = 1;
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_params(argc - 1, &argv[1]);
	while (i < argc)
	{
		ft_print_param(argv[i]);
		i++;
	}
	return (0);
}
