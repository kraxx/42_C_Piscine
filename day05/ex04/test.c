#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    char src[] = "Hello";
    char dest[] = "xxxxxxxx";

    ft_strncpy(dest, src, 3);
    printf("%s\n", dest);
    return 0;
}
