/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomauric <lomauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:07:43 by lomauric          #+#    #+#             */
/*   Updated: 2022/09/22 19:23:22 by lomauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b)
{
	char	e;
	char	f;
	char	g;
	char	h;

	e = 48 + a / 10;
	f = 48 + a % 10;
	g = 48 + b / 10;
	h = 48 + b % 10;
	write(1, &e, 1);
	write(1, &f, 1);
	write(1, " ", 1);
	write(1, &g, 1);
	write(1, &h, 1);
	if (a != 98 || b != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a;
		while (b <= 99)
		{
			if (a == b)
				write(0, 0, 0);
			else
				ft_putchar(a, b);
			b++;
		}
		a++;
	}
}
