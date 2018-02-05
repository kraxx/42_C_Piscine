#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_str_is_numeric(char *str);

int main()
{
    char str[] = "34dsfa4sda5f4ds2";
    ft_str_is_numeric(str);
    printf("%d", ft_str_is_numeric(str));
    return 0;
}
