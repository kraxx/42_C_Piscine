#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb);

int main()
{
    ft_putnbr(-2147483648);
    return 0;
}
