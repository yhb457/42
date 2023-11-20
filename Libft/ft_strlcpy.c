#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
        size_t  index;
        size_t  size;

        index = 0;
        size = ft_strlen(src);
        if (!dst || !src)//src가 NULL이면 src길이 0리턴, dst가 NULL이면 복사할 공간이 없는 것이니 0리턴
                return (0);
        if (dstsize == 0)
                return (size);
        while (src[index] != '\0' && index + 1 < dstsize)//맨 뒤에 '\0'넣어야 하니 index + 1.
        {
                dst[index] = src[index];
                index++;
        }
        dst[index] = '\0';
        return (size);
}