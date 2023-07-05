/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 15:37:50 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/05 18:32:18 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(unsigned int b, int *longi)
{
	if (b > 9 && *longi != -1)
	{
		ft_print_number(b / 10, longi);
	}
	if (*longi != -1 && ft_print_char((b % 10) + '0', longi) == -1)
		*longi = -1;
}
