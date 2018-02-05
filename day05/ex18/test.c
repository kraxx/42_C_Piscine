#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char	*ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
    // char *src;
    // char *dest;
    //
    // src = "hello";
    // dest = "bye";

    char src[] = "Hello";
    char dest[] = "Goodbye";
    strlcat(dest, src, 4);
    printf("%s\n", dest);
    return 0;
}
