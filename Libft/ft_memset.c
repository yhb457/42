#include "libft.h"

void    *ft_memset(void *dest, int c, size_t n)
{
	size_t	i;
	char	*d;

	d = (char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
