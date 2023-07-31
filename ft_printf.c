/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:51:26 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/31 16:15:15 by agrimald         ###   ########.fr       */
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
/* ESTA LIBRERIA NO ESTA PERMITIDA EN ESTE PROYECTO */

/* #include <stdio.h> */

/* ESTE MAIN MIRA TODOS LOS TEST DEL PRINTF */

/*int main()
{
	char	c = 'o';
	char	*str = "Peepo goes shopping";
	int 	num = -42;
	unsigned int	unum = 2882343476;

	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%c\t-->\t%c\n", c);
	printf("OG for %%c\t-->\t%c\n", c);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%s\t-->\t%s\n", str);
	printf("OG for %%s\t-->\t%s\n", str);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%i\t-->\t%i\n", num);
	printf("OG for %%i\t-->\t%i\n", num);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%d\t-->\t%d\n", num);
	printf("OG for %%d\t-->\t%d\n", num);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%u\t-->\t%u\n", unum);
	printf("OG for %%u\t-->\t%u\n", unum);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%X\t-->\t%X\n", unum);
	printf("OG for %%X\t-->\t%X\n", unum);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%x\t-->\t%x\n", unum);
	printf("OG for %%x\t-->\t%x\n", unum);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for %%p\t-->\t%p\n", str);
	printf("OG for %%p\t-->\t%p\n", str);
	ft_printf("--------------------------------------------\n");
	ft_printf("Test for all %%\n\n%c\n%s\n%i\n%d\n%u\n%X\n%x\n%p\n", c, str,
	num, num, unum, unum, unum, str);
	ft_printf("--------------------------------------------\n");
}*/

/* ESTE MAIN MIRA ALGUNOS TEST DEL PRINTF */

/*int	main()
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
