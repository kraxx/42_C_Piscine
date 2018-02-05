#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_str_is_printable(char *str);

int main()
{
    char str[] = "312651 6fsd51f345br15 DSFSD";
    ft_str_is_printable(str);
    printf("%d", ft_str_is_printable(str));
    return 0;
}
