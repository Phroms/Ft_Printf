/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:17:04 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/05 18:32:07 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_string(char *s, int *longi)
{
	size_t	i;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i] && *longi != -1)
	{
		if (ft_print_char(s[i], longi) == -1)
			*longi = -1;
		i++;
	}
}
