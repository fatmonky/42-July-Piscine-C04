/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:19:08 by pteh              #+#    #+#             */
/*   Updated: 2023/08/10 16:40:21 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //included stlib for testing atoi.
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	check_space(char c)
{
	if ((c > 8 && c <= 13) || (c == 32))
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	negative_count;
	int	return_val;
	int	c;

	return_val = 0;
	negative_count = 0;
	c = 0;
	while (check_space(str[c]) == 1)
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			negative_count++;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		return_val *= 10;
		return_val += str[c] - 48;
		c++;
	}
	if (negative_count % 2 != 0)
		return (-return_val);
	else
		return (return_val);
}
/*
   int	main(void)
   {
   char	wrongstart[30] = "  ---+--+1234ab567";
   char	wrongmid[15] = "1234ab567";
   char	wrongend[15] = "1234567abcd";
   char	wrongall[15] = "abcdefg";
   char	wrongminuses[30] = "  ---+-+1234ab567";

   printf("ft-wrongstart:%d\n",ft_atoi(wrongstart));
   printf("ft-wrongmid:%d\n", ft_atoi(wrongmid));
   printf("ft-wrongend: %d\n",ft_atoi(wrongend));
   printf("ft-wrongall: %d\n",ft_atoi(wrongall));
   printf("ft-wrongminuses:%d\n",ft_atoi(wrongminuses));
   }*/
