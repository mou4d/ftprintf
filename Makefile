# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 22:15:22 by mbousbaa          #+#    #+#              #
#    Updated: 2022/10/26 22:33:02 by mbousbaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES = ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_base.c ft_putstr.c ft_strlen.c
OBJECTS = $(SOURCES:.c=.o)
INCLUDES = .
NAME = libftprintf.a

all : $(NAME)
	@echo ">>>>>>>> SUCCESS <<<<<<<<"
	
$(NAME) : $(OBJECTS)
	ar -cvr $(NAME) $(OBJECTS)
	
%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@ 
	
build_libft:
	make clean -C libft

clean :
	@rm -f *.o
fclean : clean
	@rm -f $(NAME)
	echo "fclen done at `date`"
re :