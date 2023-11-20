#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *dst1;
    const char *src1;

    i = 0;
    dst1 = dst;
    src1 = src;
    if (dst1 == src1)
        return (dst1);
    while (i < n)
    {
        dst1[i] = src1[i];
        i++;
    }
    return (dst);
}

