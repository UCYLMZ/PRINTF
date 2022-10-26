/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uyilmaz <uyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:28:16 by uyilmaz           #+#    #+#             */
/*   Updated: 2022/10/26 16:14:27 by uyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_int(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
		count ++;
	}
	if (n > 9)
	{
		print_int(n / 10);
		print_int(n % 10);
	}
	else
	{
		ft_putchar(n + 48);
		count++;
	}
	return (count);
}
