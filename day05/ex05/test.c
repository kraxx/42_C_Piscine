#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

char	*ft_strstr(char *str, char *to_find);

int main()
{
    char *str;
    char *find;

    str = "Heehoohaasdfa";
    find = "1";
    printf("%s\n", strstr(str, find));
    printf("%s", ft_strstr(str, find));
    return 0;
}
