#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	int		i;

	if (!(ret = (char *)malloc(sizeof(*ret) * ft_strlen(s) + 1)))
		exit(0);
	i = 0;
	while (s[i])
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
