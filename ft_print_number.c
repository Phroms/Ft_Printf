/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:23:24 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/26 21:42:24 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_number(int number, int *count)
{
	if (number == -2147483648)
	{
		print_string("-2147483648", count);
		return ;
	}
	if (number < 0)
	{
		print_char('-', count);
		if (*count == -1)
			return ;
		print_number(number * -1, count);
		if (*count == -1)
			return ;
	}
	else
	{
		if (number > 9)
			print_number(number / 10, count);
		if (*count == -1)
			return ;
		print_char(number % 10 + '0', count);
		if (*count == -1)
			return ;
	}
}
