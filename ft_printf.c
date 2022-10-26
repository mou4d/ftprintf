/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 05:31:51 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/25 22:13:50 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	argsptr;
	size_t	i;

	va_start(argsptr, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
			{	
				ft_putchar(va_arg(argsptr, int));
			}
			if (str[i] == 's')
			{	
				ft_putstr(va_arg(argsptr, char *));
			}
			if (str[i] == 'p')
			{
				ft_putnbr_base((unsigned int)va_arg(argsptr, void *), 16);
			}
			if (str[i] == 'd' | str[i] == 'i')
			{	
				ft_putnbr(va_arg(argsptr, int));
			}
			/*if (str[i] == 'u')
			{	
				ft_putnbr(va_arg(argsptr, int)); // %u Prints an unsigned decimal (base 10) number.
			}*/
			/*if (str[i] == 'x')
			{	
				ft_putnbr(va_arg(argsptr, int)); //  %x Prints a number in hexadecimal (base 16) lowercase format.
			}*/
			/*if (str[i] == 'X')
			{	
				ft_putnbr(va_arg(argsptr, int)); // %X Prints a number in hexadecimal (base 16) uppercase format.
			}*/
			if (str[i] == '%')
			{	
				ft_putchar(va_arg(argsptr, int));
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(argsptr);
	return (0);
}

int main()
{
	int i = 10;
    ft_printf("testing %i or %d\n", 12357, 1337);
    ft_printf("testing one character %c\n", 'x');
    ft_printf("testing string %s", "string printed");
    ft_printf("testing p %p", &i);
}