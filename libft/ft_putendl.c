#include "libft.h"

void	ft_putendl(char *str)
{
	if (str)
	{
		write(1, str, ft_strlen(str));
		write(1, "\n", 1);
	}
}
