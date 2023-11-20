#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if (!(tmp = malloc(count * size)))
		return (NULL);
	ft_bzero(tmp, (count * size));
	return (tmp);
}
