/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:06:14 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/26 18:55:40 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

/* PROTOTIPO PRINTF */

int		ft_printf(const char *str, ...);

/* FUNCIONES CREADAS */

int		print_char(char c, int *count);
void	print_string(char *str, int *count);
void	print_number(int number, int *count);
void	print_pointer(unsigned long pointer, int *count);
void	print_hexa(int n, int *count, char c);
void	print_unsigned(unsigned int u, int *count);

#endif
