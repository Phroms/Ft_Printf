/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:47:04 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/05 18:31:51 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	print_pointer(unsigned long pointer, int *longi)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (*longi != -1)
	{
		if (pointer >= 16 && *longi != -1)
			print_pointer(pointer / 16, longi);
		if (*longi != -1 && ft_print_char(hex[pointer % 16], longi) == -1)
			*longi = -1;
	}
}

void	ft_print_pointer(unsigned long pointer, int *longi)
{
	ft_print_string("0x", longi);
	print_pointer(pointer, longi);
}
