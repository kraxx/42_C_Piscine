#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_str_is_lowercase(char *str);

int main()
{
    char str[] = "adfdsds";
    ft_str_is_lowercase(str);
    printf("%d", ft_str_is_lowercase(str));
    return 0;
}
