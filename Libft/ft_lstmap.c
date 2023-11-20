#include "libft.h"

t_list          *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
        t_list  *newnode;
        t_list  *node;

        node = NULL;
        while (lst)
        {
                newnode = ft_lstnew(f(lst->content));
                if (!newnode)
                {
                        ft_lstclear(&node, del);
                        return ((void*)(0));
                }
                ft_lstadd_back(&node, newnode);
                lst = lst->next;
        }
        newnode = NULL;
        return (node);
}