#include "libft.h"
#include <stdlib.h>

t_list  *ft_lstnew(void *content);

t_list  *ft_lstnew(void *content)
{
    t_list * new;

    new = (t_list *) malloc(sizeof(t_list));
    if (new == NULL)
        return (NULL);

    new -> content = content;
    new -> next = NULL;
    return (new);
}

//the symbol '->' is used to access members of a struct through a pointer.