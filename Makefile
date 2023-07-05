# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 16:17:06 by agrimald          #+#    #+#              #
#    Updated: 2023/07/05 19:06:06 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libftprintf.a
ARC = ar rcs
RM = rm -f
CCFLAGS = -Wall -Wextra -Werror


SRCS =  ft_printf.c \
		ft_print_char.c \
		ft_print_string.c \
		ft_print_pointer.c \
		ft_print_hex.c \
		ft_print_unsigned.c \
		ft_print_number.c 

OBJS = $(SRCS:.c=.o)

HEADER = ft_printf.h

all = $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(ARC) $(NAME) $(OBJS)

%.o: %.c  
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
