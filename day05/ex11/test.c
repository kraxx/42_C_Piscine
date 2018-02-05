#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_str_is_alpha(char *str);

int main()
{
    char str[] = "";
    ft_str_is_alpha(str);
    printf("%d", ft_str_is_alpha(str));
    return 0;
}
