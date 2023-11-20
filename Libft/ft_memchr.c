#include "libft.h"

void    *ft_memchr(const void *b, int c, size_t n)
{
    unsigned char *s;
    size_t i;

    s = (unsigned char*)b;
    i = 0;
    while (i < n)
    {
        if (s[i] == (unsigned char)c)
            return ((void *)&s[i]);
        i++;
    }
    return (0);
}