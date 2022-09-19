
#include <unistd.h>

void	ft_puthar(char p)
{
	write(1, &p, 1);
}
