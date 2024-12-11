# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 16:32:09 by mmefo             #+#    #+#              #
#    Updated: 2024/11/26 13:11:29 by mmefo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_c.c \
ft_printf.c \
ft_putstr.c \
ft_putnbr_base.c \
ft_strlen.c \
ft_strncmp.c \
ft_d.c \
ft_i.c \
ft_p.c \
ft_percent.c \
ft_s.c \
ft_u.c \
ft_x.c \
ft_X.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean all fclean
