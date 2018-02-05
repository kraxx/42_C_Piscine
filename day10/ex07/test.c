#include <stdio.h>
void	ft_sort_wordtab(char **tab);
char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char	**arr = { "hello", "goodbye"};
	char	**tab;
	int		i = 0;

	tab = ft_split_whitespaces(arr);
	ft_sort_wordtab(tab);
	while (tab[i])
	{
		printf("%s\n",tab[i]);
		i++;
	}
	return (0);
}
