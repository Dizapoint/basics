#include "unistd.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else if (n < 0)
		ft_putchar('N');
}

int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(-5);
	ft_is_negative(0);
	return (0);
}