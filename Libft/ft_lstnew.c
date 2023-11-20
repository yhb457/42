#include "libft.h"

t_list          *ft_lstnew(void *content)
{
        t_list  *new;

        if (!(new = (t_list*)malloc(sizeof(t_list))))//할당 실패 시 NULL 리턴
        {
                return (NULL);
        }
        new->next = NULL;
        new->content = content;
        return (new);
}