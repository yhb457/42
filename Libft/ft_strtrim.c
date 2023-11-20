#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
char* ft_strchr(const char* s, int c);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t	front;
	size_t	rear;
	char* str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		rear = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[rear - 1] && ft_strchr(set, s1[rear - 1]) && rear > front)
			rear--;
		str = (char*)malloc(sizeof(char) * (rear - front + 1));
		if (str)
			ft_strlcpy(str, &s1[front], rear - front + 1);
	}
	return (str);
}