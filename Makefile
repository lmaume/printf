# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 16:10:53 by lmaume            #+#    #+#              #
#    Updated: 2023/12/18 16:11:11 by lmaume           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIB = -L. -libftprintf

RM = rm -f

OBJS = $(SRCS:.c=.o)

all : $(NAME)
	
$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all