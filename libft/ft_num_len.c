#include "libft.h"

int		ft_num_len(int n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}
