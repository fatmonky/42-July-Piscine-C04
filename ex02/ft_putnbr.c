/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:12:45 by pteh              #+#    #+#             */
/*   Updated: 2023/08/10 18:18:02 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0 && nb > -2147483648)
	{
		ft_putchar('-');
		nb = -1 * nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}	
}

int	main(void)
{
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	printf("INT_MAX %d\n",INT_MAX);
	ft_putnbr(INT_MAX);
	write(1, "\n", 1);
	printf("INT_MIN %d\n",INT_MIN);
	ft_putnbr(INT_MIN);
	write(1, "\n", 1);
}
