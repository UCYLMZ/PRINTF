/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uyilmaz <uyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:35:07 by uyilmaz           #+#    #+#             */
/*   Updated: 2022/10/26 17:35:28 by uyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	formatter(va_list s, char f)
{
	int	count;

	count = 0;
	if (f == 'd' || f == 'i')
		count += print_int(va_arg(s, int));
	else if (f == 'c')
		count += print_char(va_arg(s, char));
	else if (f == 's')
		count += print_string(va_arg(s, char *));
	else if (f == 'u')
		count += print_unsigned(va_arg(s, unsigned int));
	else if (f == 'p')
		count += print_adr(va_arg(s, unsigned long));
	else if (f == 'X' || f == 'x')
		count += print_hex(va_arg(s, int));
	else if (f == '%')
		count += print_percent();
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	lst;

	va_start(lst, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
			count += formatter(lst, s[++i]);
		else
		{
			ft_putchar(1, &s[i], 1);
			count++;
		}
		i++;
	}
	va_end(s);
	return (count);
}
