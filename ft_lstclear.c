#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*));

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *temp;

    if (lst == NULL || *lst == NULL || del == NULL)
    {
        return;
    }

    while (lst && *lst)
    {
        temp = (*lst) -> next;
        ft_lstdelone(*lst,del);
        *lst = temp;
    }
    *lst = NULL;
}