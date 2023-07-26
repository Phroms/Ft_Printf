/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:42:45 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/26 19:59:43 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	static_print_pointer(unsigned long pointer, int *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (*count != -1)
	{
		if (pointer >= 16 && *count != -1)
			static_print_pointer(pointer / 16, count);
		if (*count != -1 && print_char(hex[pointer % 16], count) == -1)
			*count = -1;
	}
}

void	print_pointer(unsigned long pointer, int *count)
{
	print_string("0x", count);
	static_print_pointer(pointer, count);
}
