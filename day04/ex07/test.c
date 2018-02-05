#include <stdio.h>
#include "ft_find_next_prime.c"

int main()
{
    int x;

    x = 8;
    ft_find_next_prime(x);
    printf("%d", ft_find_next_prime(x));
    return 0;
}
