#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	**ft_split_whitespaces(char *str);

int		main()
{
	printf("hello1\n");
	char	*phrase = " \t  m\ny name is\t hello\n\t  world\t \n";
	char	**table = ft_split_whitespaces(phrase);

	printf("%s\n", phrase);
	printf("hello2\n");
	while (**table)
		printf("%s, ", *table++);
	return 0;
}
