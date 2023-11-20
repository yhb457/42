#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        unsigned int    len;
        char            *str;
        unsigned int    index;

        index = 0;
        str = NULL;
        len = (unsigned int)(ft_strlen(s));
        if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
        {
                return (NULL);
        }
        while (index < len)
        {
                str[index] = f(index, s[index]);
                index++;
        }
        str[index] = '\0';
        return (str);
}