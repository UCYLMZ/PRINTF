/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uyilmaz <uyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:58:41 by uyilmaz           #+#    #+#             */
/*   Updated: 2022/10/27 17:56:42 by uyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	norm_killer(size_t value, char c, int *count)
{
	if (c == 'X')
	{
		if (value > 9)
			print_char(value + 55, count);
		else
			print_char(value + 48, count);
	}
	else
	{
		if (value > 9)
			print_char(value + 55 + 32, count);
		else
			print_char(value + 48, count);
	}
}

void	print_hex(size_t value, char c, int *count)
{
	if (value >= 16)
	{
		print_hex(value / 16, c, count);
		print_hex(value % 16, c, count);
	}
	else
		norm_killer(value, c, count);
}
