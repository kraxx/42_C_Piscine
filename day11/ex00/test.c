#include <stdio.h>
#include "ft_list.h"

int main(void)
{
    int i;
    int *ptr;
    t_list  *list;
    int *result;

  	i = 42;
    ptr = &i;
    ft_create_elem(ptr);
    list = ft_create_elem(ptr);
    // list, is a t_list.
    // things that are of type t_list...
    // have a next, and a data.
    result = list->data;
    printf("%d\n", *result);
    return (0);
}
