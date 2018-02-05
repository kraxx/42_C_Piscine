#include <stdio.h>
#include "ft_is_prime.c"

int main()
{
    int x;

    x = 2000000000;
    ft_is_prime(x);
    printf("%d", ft_is_prime(x));
    return 0;
}
