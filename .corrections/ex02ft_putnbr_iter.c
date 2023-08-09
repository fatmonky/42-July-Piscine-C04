/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02ft_putnbr_iter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:12:45 by pteh              #+#    #+#             */
/*   Updated: 2023/08/09 16:09:03 by pteh             ###   ########.fr       */
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
	char	arr[10];
	int	i;

	i = 0;
	if (nb == 0)
	{
		ft_putchar('0');
		return;
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	while (nb)
	{
		arr[i++] = (nb % 10) + 48;
		nb = nb / 10;
	}
	while (i > 0)
		ft_putchar(arr[i--]);
}
//this generates gibberish. doesn't really work.
#include <stdio.h>

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
//	ft_putnbr(INT_MAX + 1);
	write(1, "\n", 1);
//	ft_putnbr(INT_MIN - 1);
}
