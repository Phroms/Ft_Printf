/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:26:02 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/05 18:58:59 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	see_type(char c, va_list *argume, int *longi)
{
	if (c == 'c')
		ft_print_char(va_arg(*argume, int), longi);
	if (c == 's')
		ft_print_string(va_arg(*argume, char *), longi);
	if (c == 'd' || c == 'i')
		ft_print_number(va_arg(*argume, int), longi);
	if (c == 'u')
		ft_print_unsigned(va_arg(*argume, unsigned int), longi);
	if (c == 'x' || c == 'X')
		ft_print_hex(va_arg(*argume, int), longi, c);
	if (c == 'p')
		ft_print_pointer(va_arg(*argume, unsigned long), longi);
	if (c == '%')
		ft_print_char('%', longi);
}

int	ft_printf(const char *str, ...)
{
	va_list	argume;
	size_t	i;
	int		longi;

	i = 0;
	longi = 0;
	va_start(argume, str);
	while (str[i] && longi != -1)
	{
		if (str[i] == '%')
		{
			i++;
			see_type(str[i], &argume, &longi);
			i++;
		}
		else
		{
			ft_print_char(str[i], &longi);
			i++;
		}
		if (longi == -1)
			return (-1);
	}
	va_end(argume);
	return (longi);
}
