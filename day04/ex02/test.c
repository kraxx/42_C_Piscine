#include <stdio.h>
#include "ft_iterative_power.c"

int main()
{
    int x;
    int y;

    x = 13;
    y = 12;
    ft_iterative_power(x,y);
    printf("%d", ft_iterative_power(x,y));
    return 0;
}
