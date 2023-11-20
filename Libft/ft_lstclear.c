#include "libft.h"

void                    ft_lstclear(t_list **lst, void (del)(void*))
{
        t_list          *cur;

        if (lst == NULL || del == NULL)
        {
                return ;
        }
        while (*lst)
        {
                cur = (*lst)->next;
                ft_lstdelone(*lst, del);
                *lst = cur;
        }
        *lst = 0;
}