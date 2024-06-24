#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new);

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst)
    {
        if (*lst)
        {
            new -> next = new;
        }
        *lst = new;
    }
}