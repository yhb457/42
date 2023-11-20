#include "libft.h"

void        *ft_memmove(void *dest, const void *src, size_t n)
{
        size_t                  index;

        if (!src && !dest)
                return (NULL);
        index = 0;
        if ((unsigned char *)dest < (unsigned char *)src)
        {
                while (index < n)
                {
                        ((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
                        index++;
                }
        }
        else
        {
                while (index < n)
                {
                        ((unsigned char *)dest)[n - 1 - index] =
                        ((unsigned char *)src)[n - 1 - index];
                        index++;
                }
        }
        return ((unsigned char *)dest);
}
