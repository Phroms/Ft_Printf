# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 16:17:06 by agrimald          #+#    #+#              #
#    Updated: 2023/07/05 19:51:05 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
AR = ar rc
RM = rm -f
HEADER = ft_printf.h

SRCS = ft_printf.c \
		ft_print_char.c \
		ft_print_string.c \
		ft_print_number.c \
		ft_print_unsigned.c \
		ft_print_hex.c \
		ft_print_pointer.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

		$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER) $(HEADER_LIBFT)
		$(CC) $(CFLAGS) -c $< -o $@

clean: 
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
