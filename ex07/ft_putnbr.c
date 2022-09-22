/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:39:59 by lomauric          #+#    #+#             */
/*   Updated: 2022/09/22 19:23:43 by lomauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnbr(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_printnbr(nb + 48);
	}
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}
*/
