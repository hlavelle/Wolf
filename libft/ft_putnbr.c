#include "libft.h"

void			ft_putnbr(int nb)
{
	if (nb < 0)
		ft_putchar('-');
	if ((nb >= 10) || (nb <= -10))
	{
		ft_putnbr(ft_abs(nb / 10));
		ft_putnbr(ft_abs(nb % 10));
	}
	else
		ft_putchar(ft_abs(nb) + '0');
}
