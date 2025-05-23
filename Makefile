# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 21:14:10 by gpollast          #+#    #+#              #
#    Updated: 2025/05/19 11:47:58 by gpollast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = #-Wall -Werror -Wextra
LDFLAGS = -L. -lft -lbsd
TARGET = a.out
MAKE = make
SRCS =	main.c \
		ft_printf.c \
		ft_putchar_len.c \
		ft_putstr_len.c \
		ft_putnbr_len.c \
		ft_putadress.c \
		ft_putUnbr_len.c \
		ft_puthex_low.c \
		ft_puthex_up.c
	
OBJS = $(SRCS:.c=.o)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
all: $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(TARGET)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(TARGET)
re: fclean all

test: all 
	$(MAKE) -C .. && ./a.out
.PHONY: all clean fclean re test
