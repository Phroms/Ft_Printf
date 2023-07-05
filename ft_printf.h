/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:59:03 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/05 19:00:03 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

/* PROTOTIPO PRINFT */
int		ft_printf(const char *str, ...);

/* FUNCIONES */
int		ft_print_char(char c, int *longi);
void	ft_print_string(char *s, int *longi);
void	ft_print_pointer(unsigned long pointer, int *longi);
void	ft_print_hex(int n, int *longi, char c);
void	ft_print_number(int a, int *longi);
void	ft_print_unsigned(unsigned int b, int *longi);

#endif
