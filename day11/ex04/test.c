#include "ft_list.h"
#include <stdio.h>

t_list    *ft_create_elem(void *data);

t_list *ft_list_last(t_list *begin_list);

int        main(void)
{
    t_list        *link;
    t_list        *show;

    link = ft_create_elem("one");
    link->next = ft_create_elem("two");
    link->next->next = ft_create_elem("three");
    link->next->next->next = ft_create_elem("four");
    link->next->next->next->next = ft_create_elem("five");
    link->next->next->next->next->next = ft_create_elem("last");

    show = ft_list_last(link);

    printf("Last element is: %s\n", show->data);

    if (!link)
        printf("List has been cleared.\n");
    return (0);
}
