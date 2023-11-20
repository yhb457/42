#include "libft.h"

int ft_memcmp(const void *b1, const void *b2, size_t n)
{
    unsigned char   *m1;
    unsigned char   *m2;
    size_t  i;

    if (n == 0)
        return (0);
    i = 0;
    m1 = (unsigned char *)b1;
    m2 = (unsigned char *)b2;
    while (i < n)
    {
        if (m1[i] != m2[i])
            return (m1[i] - m2[i]);
        i++;
    }
    return (0);
}