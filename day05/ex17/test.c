#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb);

int main()
{
    // char *src;
    // char *dest;
    //
    // src = "hello";
    // dest = "bye";

    char src[] = "Hello";
    char dest[] = "Goodbye";
    strncat(dest, src, 7);
    printf("%s\n", dest);
    return 0;
}
