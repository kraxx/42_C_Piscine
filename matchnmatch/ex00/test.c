#include <stdio.h>

int        match(char *s1, char *s2);

int main(int argc, char **argv)
{
    if (argc != 3)
        return 0;
    printf("%d\n", match(argv[1], argv[2]));
    return (0);
}
