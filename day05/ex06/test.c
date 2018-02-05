#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strcmp(char *s1, char *s2);

int main()
{
    char *str;
    char *find;

    str = "d";
    find = "ab";
    printf("%d\n", strcmp(str, find));
    printf("%d", ft_strcmp(str, find));
    return 0;
}
