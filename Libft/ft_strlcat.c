#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t destsize)
{
        size_t  index;
        size_t  dstlen;
        size_t  srclen;

        index = 0;
        dstlen = ft_strlen(dest);
        srclen = ft_strlen(src);
        if (destsize < dstlen + 1)
        {
                return (srclen + destsize);
        }
        while (dstlen + 1 + index < destsize && src[index] != '\0')
        {
                dest[index + dstlen] = src[index];
                index++;
        }
        dest[dstlen + index] = '\0';
        return (dstlen + srclen);
}
