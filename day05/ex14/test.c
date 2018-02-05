#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_str_is_uppercase(char *str);

int main()
{
    char str[] = "DSFSD";
    ft_str_is_uppercase(str);
    printf("%d", ft_str_is_uppercase(str));
    return 0;
}
