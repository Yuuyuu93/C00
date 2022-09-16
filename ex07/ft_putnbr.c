#include <unistd.h>

void	ft_printnbr(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbrbis;

	nbrbis = nbr;
	if(nbr < 0)
		nbrbis = -nbr;
		write(1, "-", 1);
	nbrbis = nbr;
	if(nbbis >= 10)
		ft_putnbr(nbrbis/10);
		ft_putnbr(nbrbis%100;
	else
		ft_printnbr(nbrbis + 48)
}
