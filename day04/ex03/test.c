#include <stdio.h>
#include "ft_recursive_power.c"

int main()
{
    int x;
    int y;

    x = 13;
    y = 10;
    ft_recursive_power(x,y);
    printf("%d", ft_recursive_power(x,y));
    return 0;
}
