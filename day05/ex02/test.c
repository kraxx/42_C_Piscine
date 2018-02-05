#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int	ft_atoi(char *str);

int main()
{
    char *str;

    str = "-2147483648";
    atoi(str);
    printf("%s\n", str);
    ft_atoi(str);
    printf("%s", str);
    return 0;
}
