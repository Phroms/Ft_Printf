/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 15:24:19 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/05 18:31:26 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_number(int a, int *longi)
{
	unsigned int	ui;

	if (a < 0 && *longi != -1)
	{
		ui = (unsigned int) - a;
		if (ft_print_char('-', longi) == -1)
			*longi = -1;
	}
	else
		ui = (unsigned int) a;
	if (ui > 9 && *longi != -1)
	{
		ft_print_number(ui / 10, longi);
	}
	if (*longi != -1 && ft_print_char((ui % 10) + '0', longi) == -1)
		*longi = -1;
}
