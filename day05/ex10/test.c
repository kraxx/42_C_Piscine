#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int main()
{
    char str[] = "dsfjLJFDSFnlkSD DJSFLKDSJFDS(F*l jdsa dsa33-= -==-=ds a32  )";
    ft_strcapitalize(str);
    printf("%s", str);
    return 0;
}
