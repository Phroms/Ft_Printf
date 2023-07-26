/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:51:26 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/26 19:09:56 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	see_the_str(char c, va_list args, int *count)
{
	if (c == 'c')
		print_char(va_arg(args, int), count);
	if (c == 's')
		print_string(va_arg(args, char *), count);
	if (c == 'p')
		print_pointer(va_arg(args, unsigned long), count);
	if (c == 'u')
		print_unsigned(va_arg(args, unsigned int), count);
	if (c == 'd' || c == 'i')
		print_number(va_arg(args, int), count);
	if (c == 'x' || c == 'X')
		print_hexa(va_arg(args, int), count, c);
	if (c == '%')
		print_char('%', count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] && count != -1)
	{
		if (str[i] == '%')
		{
			i++;
			see_the_str(str[i], args, &count);
			i++;
		}
		else
		{
			print_char(str[i], &count);
			i++;
		}
	}
	va_end(args);
	return (count);
}
/*
#include <stdio.h>
int	main()
{
	int	result;

	result = 0;
	printf("///printf///\n");
	result = printf("%s", "");
	printf("\n");
	printf("%d\n", result);
	printf("///ft_printf///\n");
	result = ft_printf("%s", "");
	printf("\n");
	printf("%d\n", result);
	return (0);
}*/
