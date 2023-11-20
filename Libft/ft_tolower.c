#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return ('a' + (c - 'A'));
    else
        return c;
}