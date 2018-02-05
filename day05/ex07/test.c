#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
    char *str;
    char *find;

    str = "xxx8xxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    find = "xxxdxxxxxxxxxxdxxxxxxxxxxxxxxxdx";
    printf("%d\n", strncmp(str, find, 5));
    printf("%d", ft_strncmp(str, find, 5));
    return 0;
}
