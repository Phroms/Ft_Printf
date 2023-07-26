/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:07:39 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/26 21:49:37 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexa(int n, int *count, char c)
{
	char			*hex_minus;
	char			*hex_mayus;
	unsigned int	number;

	hex_minus = "0123456789abcdef";
	hex_mayus = "0123456789ABCDEF";
	number = (unsigned int)n;
	if (number >= 16 && *count != -1)
		print_hexa(number / 16, count, c);
	if (c == 'x')
	{
		if (*count != -1 && print_char(hex_minus[number % 16], count) == -1)
			*count = -1;
	}
	if (c == 'X')
	{
		if (*count != -1 && print_char(hex_mayus[number % 16], count) == -1)
			*count = -1;
	}
}

void	print_unsigned(unsigned int u, int *count)
{
	if (u >= 10)
		print_unsigned(u / 10, count);
	print_char(u % 10 + '0', count);	
}
