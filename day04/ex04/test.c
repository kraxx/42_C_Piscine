#include <stdio.h>
#include "ft_fibonacci.c"

int main()
{
    int x;

    x = 46;
    ft_fibonacci(x);
    printf("%d", ft_fibonacci(x));
    return 0;
}
