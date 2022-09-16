#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if(c == '7' && b == '8' && a == '9')
		write(0, 0, 0);
	else
		write(1, ",", 1);
		write(1, " ", 1);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 0;
	while(a <= '7')
	{
		b = a + 1;
		while(b <= '8')
		{
			c = b + 1;
			while(c <= '9')
			{
				ft_putchar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
