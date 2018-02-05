#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);

int main(void)
{
    t_list *list;

   list = ft_create_elem((void*)10);
    ft_list_push_front(&list, (void*)13);
    ft_list_push_front(&list, (void*)15);

   while (list != NULL)
    {
        printf("%d\n", (int)list->data);
        list = list->next;
    }
}
