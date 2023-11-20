#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int n;

    n = 0;
    while (lst)
    {
        lst = last->next;
        n++;
    }
    return (n);
}