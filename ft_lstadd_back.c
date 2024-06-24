#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new);

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *lastnode;

    if (lst)
    {
        if (*lst)
        {
            lastnode = ft_lstlast(lst);
            lastnode -> next = new;
        }
        else
        {
            *lst = new;
        }
    }
}