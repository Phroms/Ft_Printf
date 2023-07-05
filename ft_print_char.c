/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:16:42 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/05 19:00:53 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c, int *longi)
{
	if (write(1, &c, 1) == -1)
		*longi = -1;
	else
		*longi += 1;
	return (*longi);
}
