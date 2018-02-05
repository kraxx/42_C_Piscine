#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_rot42(char *str);

int main()
{
    char string[] = "Hi my name is Bizu";
    printf("%s", ft_rot42(string));
    return 0;
}
