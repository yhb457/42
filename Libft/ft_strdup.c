#include "libft.h"

char                    *ft_strdup(const char *s1)
{
        char            *p;
        size_t          slen;
        size_t          index;

        index = 0;
        slen = ft_strlen(s1);
        if (!(p = (char*)malloc(sizeof(char) * (slen + 1))))
        {
                return (0);
        }
        while (index < slen)
        {
                p[index] = s1[index];
                index++;
        }
        p[index] = '\0';
        return (p);
}
