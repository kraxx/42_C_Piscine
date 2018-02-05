#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int    *ft_range(int min, int max);

int		main()
{
	int *table;
	int i = 0;

	table = ft_range(-10,220);

	while (table[i] != -111)
	{
		printf("%i, %i\n",i, table[i]);
		// printf("%i, %d\n",i, *table);
		i++;
	}
	return 0;
}
