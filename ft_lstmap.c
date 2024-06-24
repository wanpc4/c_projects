#include "libft.h"
#include <stdlib.h>

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list * head;

    if (f == NULL || del == NULL)
    {
        return;
    }
}