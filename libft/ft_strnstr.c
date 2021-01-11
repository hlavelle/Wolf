#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char cut_haystack[len + 1];

	ft_memcpy(cut_haystack, haystack, len);
	cut_haystack[len] = 0;
	if (ft_strstr(cut_haystack, needle))
		return (ft_strstr(haystack, needle));
	return (0);
}
