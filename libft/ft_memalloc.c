#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ret;

	if (!(ret = malloc(sizeof(*ret) * size)))
		return (NULL);
	ft_bzero(ret, size);
	return (ret);
}
