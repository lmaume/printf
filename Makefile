# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmaume <lmaume@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 16:10:53 by lmaume            #+#    #+#              #
#    Updated: 2024/01/11 14:40:24 by lmaume           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c

LIBFT = ./libft/libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

OBJS = $(SRCS:.c=.o)


all : $(NAME)

$(NAME) : $(OBJS)
	$(MAKE) all -C ./libft
	cp $(LIBFT) $(NAME)
	ar -rc $(NAME) $(OBJS)


clean :
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re : fclean all
