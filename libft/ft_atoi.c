#include "libft.h"

int		ft_atoi(const char *str)
{
	int	ret;
	int neg;

	if (!*str || !str)
		return (0);
	neg = 1;
	ret = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	return (ret * neg);
}
