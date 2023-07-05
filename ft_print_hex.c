/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:50:52 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/05 18:29:13 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(int n, int *longi, char c)
{
	char			*hexa_minus;
	char			*hexa_mayus;
	unsigned int	number;

	hexa_minus = "0123456789abcdef";
	hexa_mayus = "0123456789ABCDEF";
	number = (unsigned int)n;
	if (number >= 16 && *longi != -1)
		ft_print_hex(number / 16, longi, c);
	if (c == 'x')
	{
		if (*longi != -1 && ft_print_char(hexa_minus[number % 16], longi) == -1)
			*longi = -1;
	}
	if (c == 'X')
	{
		if (*longi != -1 && ft_print_char(hexa_mayus[number % 16], longi) == -1)
			*longi = -1;
	}
}
