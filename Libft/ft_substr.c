#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t l;
    char    *dest;

    l = len - start;
    dest = (char*)malloc(sizeof(char) * (len + 1));
 
    strncpy(dest, (s + start), l);
 
    return dest;
}