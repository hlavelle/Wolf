#include "libft.h"

void			ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
		ft_putchar_fd('-', fd);
	if ((nb >= 10) || (nb <= -10))
	{
		ft_putnbr_fd(ft_abs(nb / 10), fd);
		ft_putnbr_fd(ft_abs(nb % 10), fd);
	}
	else
		ft_putchar_fd(ft_abs(nb) + '0', fd);
}
