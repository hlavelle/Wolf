#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t n;

	if (!*needle)
		return ((char *)haystack);
	n = ft_strlen(needle);
	while (*haystack)
	{
		if (!ft_memcmp(haystack, needle, n))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
