/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uyilmaz <uyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:40:27 by uyilmaz           #+#    #+#             */
/*   Updated: 2022/10/27 17:52:09 by uyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_ptr(size_t ptr, int *count)
{
	size_t	value;

	value = ptr;
	*count += write(1, "0x", 2);
	print_hex(value, 'x', count);
}
