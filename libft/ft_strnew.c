#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ret;

	if (!(ret = (char *)ft_memalloc(sizeof(*ret) * size + 1)))
		exit(0);
	return (ret);
}
