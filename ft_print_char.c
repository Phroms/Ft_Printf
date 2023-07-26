/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:54:24 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/26 20:07:33 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c, int *count)
{
	int	result;

	result = 0;
	if (*count != -1)
		result = write(1, &c, 1);
	if (result == -1)
	{
		*count = -1;
		return (-1);
	}
	else
	{
		*count += 1;
		return (*count);
	}
}

void	print_string(char *str, int *count)
{
	size_t	i;

	i = 0;
	if (!str || str == NULL)
	{
		print_string("(null)", count);
		return ;
	}
	while (str[i] != '\0' && *count != -1)
	{
		print_char(str[i], count);
		i++;
	}
}
