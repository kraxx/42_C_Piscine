#include <stdio.h>
#include "ft_iterative_factorial.c"

int main()
{
    int x;

    x = 0;
    ft_iterative_factorial(x);
    printf("%d", ft_iterative_factorial(x));
    return 0;
}
