/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 05:31:51 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/26 18:32:30 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	argsptr;
	size_t	i;
	size_t	ret;

	va_start(argsptr, str);
	i = 0;
	ret = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
			{	
				ft_putchar(va_arg(argsptr, int), &ret);
			}
			if (str[i] == 's')
			{	
				ft_putstr(va_arg(argsptr, char *), &ret);
			}
			if (str[i] == 'p')
			{
				ft_putnbr_base((unsigned long)va_arg(argsptr, void *), "123456789abcdef", &ret);
			}
			if ((str[i] == 'd') || (str[i] == 'i'))
			{	
				ft_putnbr(va_arg(argsptr, int), &ret);
			}
			/*if (str[i] == 'u')
			{	
				ft_putnbr(va_arg(argsptr, int)); // %u Prints an unsigned decimal (base 10) number.
			}*/
			if (str[i] == 'x')
			{	
				//  %x Prints a number in hexadecimal (base 16) lowercase format.
				ft_putnbr_base(va_arg(argsptr, int), "0123456789abcdef",&ret);
			}
			if (str[i] == 'X')
			{
				ft_putnbr_base(va_arg(argsptr, int), "0123456789ABCDEF", &ret);
				// %X Prints a number in hexadecimal (base 16) uppercase format.
			}
			if (str[i] == '%')
			{	
				ft_putchar(va_arg(argsptr, int), &ret);
			}
		}
		else
		{
			ft_putchar(str[i], &ret);
		}
		i++;
	}
	va_end(argsptr);
	return (ret);
}

#include <stdio.h>
int main()
{
	int i = 123;

   	printf("%d\n", ft_printf("testing %i or %d\n", 12357, 1337));
    printf("%d\n", ft_printf("testing one character %c\n", 'x'));
    printf("%d\n", ft_printf("testing string %s", "string printed\n"));
    printf("%d\n", ft_printf("testing p %p\n", &i));
    printf("%d\n", ft_printf("testing x %x\n", 123));
    printf("%d\n", ft_printf("testing X %X\n", 123));
}