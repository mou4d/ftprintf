CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES = ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_base.c  ft_put_address.c ft_putstr.c ft_strlen.c
OBJECTS = $(SOURCES:.c=.o)
INCLUDES = .
NAME = libftprintf.a
OBJS_DIR = ./objs/

all : $(NAME)
	@echo ">>>>>>>> SUCCESS <<<<<<<<"
	
$(NAME) : $(OBJECTS)
	ar -cvr $(NAME) $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@ 

clean :
	@rm -f *.o

fclean : clean
	@rm -f $(NAME)

re : fclean all