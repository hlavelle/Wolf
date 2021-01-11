#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while ((s[i] <= ' ') && (s[i]))
		i++;
	while ((s[j] <= ' ') && (j >= i))
		j--;
	if (!*s || ((j - i) == 0))
		return ("");
	return (ft_strsub(s, i, (j - i + 1)));
}
