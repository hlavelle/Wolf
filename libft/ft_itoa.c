#include "libft.h"

char			*ft_itoa(int n)
{
	char	*ret;
	int		neg;

	neg = 1;
	if (n < 0)
	{
		if (!(ret = ft_strnew(ft_num_len(n) + 1)))
			return (NULL);
		ret[0] = '-';
		neg = 0;
	}
	else if (!(ret = ft_strnew(ft_num_len(n))))
		return (NULL);
	if (n == 0)
		*ret = '0';
	while (n)
	{
		ret[ft_num_len(n) - neg] = (ft_abs(n % 10) + '0');
		n /= 10;
	}
	return (ret);
}
