/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_counter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uyilmaz <uyilmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:26:00 by uyilmaz           #+#    #+#             */
/*   Updated: 2022/10/26 13:00:04 by uyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	percent_counter(char *first_param)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (first_param[i])
	{
		if (first_param[i] == '%' && first_param[i + 1] != '%')
			count++;
		i++;
	}
	return (count);
}
