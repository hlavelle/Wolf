#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	if (!dst && !src)
		return (NULL);
	dp = (unsigned char*)dst;
	sp = (unsigned char*)src;
	while (n--)
		*dp++ = *sp++;
	return (dst);
}
