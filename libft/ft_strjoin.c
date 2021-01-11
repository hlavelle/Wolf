#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;

	if (!s1 || !s2 || !(ret = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		exit(0);
	ft_strcpy(ret, s1);
	ft_strcat(ret, s2);
	return (ret);
}
