#include <stdio.h>
#include "ft_recursive_factorial.c"

int main()
{
    int x;

    x = 13;
    ft_recursive_factorial(x);
    printf("%d", ft_recursive_factorial(x));
    return 0;
}
