# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 14:55:55 by mbousbaa          #+#    #+#              #
#    Updated: 2022/10/25 23:30:26 by mbousbaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -Wall -Wextra -Werror 
INCLUDES = libft.h
SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)

all : $(NAME)
	@echo libft compiled successfully

$(NAME) : $(OBJS)
	ar -cvq libft.a $(OBJS)

%.o : %.c $(INCLUDES)
	$(CC) -I $(INCLUDES) -c $<

clean : 
	rm -rf ft_*.o

fclean :
	rm -rf $(OBJS) libft.a

re : fclean all
