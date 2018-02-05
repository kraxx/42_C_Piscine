#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
    char src[] = "Hello";
    char dest[] = "xxxxxxxxxxxxxxx";

    strcpy(dest, src);
    printf("%s\n", dest);
    return 0;
}
