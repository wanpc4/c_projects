#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    if (lst == NULL && f == NULL)
        return (NULL);

    t_list *new;
    t_list *node;
    new = NULL;
    while (lst)
    {
        node = ft_lstnew(lst -> content);
        if (node == NULL)
        {
            ft_lstclear(&node, (*del));
            return (NULL);
        }
        ft_lstadd_back(&node, (*del));
        lst = lst -> next;
    }
    return (new);
}