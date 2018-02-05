#include <unistd.h>
#include <stdlib.h>
#include "header.h"
#include "rush.h"

# define BUF_SIZE 65536

char	*read_input(void)
{
	int		ret;
	int		total_size;
	char	buf[BUF_SIZE + 1];
	char	*final;
	char	tmp[100000];

	total_size = 0;
	final = malloc(42);
	while ((ret = read(0, buf, BUF_SIZE)) > 0)
	{
		ft_strcpy(tmp, final);
        if (!final)
		      free(final);
		buf[ret] = '\0';
		total_size += ret;
		final = (char *)malloc(sizeof(char) * total_size);
		final = ft_strcat(tmp, buf);
	}
	return (final);
}

int		*find_coordinates(char *input)
{
	int		*xy;
    int i;
    int nl;

    xy = (int *)malloc(sizeof(int) * 2);
    xy[0] = 0;
    xy[1] = 0;
    nl = 0;
    i = 0;
    while (*input != '\0')
    {
        i++;
        if (*input == '\n')
        {
            nl++;
            if (xy[0] == 0)
                xy[0] = i - 1;
        }
        input++;
    }
    xy[1] = nl;
	return (xy);
}

void rush_cmp(char *input, int *xy)
{
    int i;
    int first;
    int auc;

    first = 0;
    i = 0;
    auc = 0;
    while (i < 5)
    {
        if (!(ft_strcmp(input, g_rush_ptr_array[i](xy[0], xy[1]))))
        {
            if (first)
                ft_putstr(" || ");
            ft_putline(i, xy);
            first = 1;
            auc = 1;
        }
        i++;
    }
    if (!auc)
        ft_pustr("aucune");
}

int main(void)
{
    char *input;
    int *xy;

    input = read_input();
    xy = find_coordinates(input);
    rush_cmp(input, xy);
    ft_puthcar('\n');
    return (0);
}
