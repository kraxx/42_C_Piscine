#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strlowcase(char *str);

int main()
{
    char str[] = "Hello, my name is: Bob! xDDDDddDdd";
    ft_strlowcase(str);
    printf("%s", str);
    return 0;
}
