#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
    // char *src;
    // char *dest;
    //
    // src = "hello";
    // dest = "bye";

    char src[] = "Hello";
    char dest[] = "Goodbye";
    ft_strcat(dest, src);
    printf("%s\n", dest);
    return 0;
}
