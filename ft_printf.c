/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 05:31:51 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/27 00:52:47 by mbousbaa         ###   ########.fr       */
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
			else if (str[i] == 's')
			{
				ft_putstr(va_arg(argsptr, char *), &ret);
			}
			else if (str[i] == 'p')
			{
				ft_putstr("0x", &ret);
				ft_putnbr_base((unsigned long)va_arg(argsptr, void *),
					"123456789abcdef", &ret);
			}
			else if ((str[i] == 'd') || (str[i] == 'i'))
			{	
				ft_putnbr(va_arg(argsptr, int), &ret);
			}
			else if (str[i] == 'u')
			{	
				// ft_putnbr(va_arg(argsptr, unsigned int), &ret);
				ft_putnbr_base(va_arg(argsptr, unsigned long),
					"0123456789", &ret);
			}
			else if (str[i] == 'x')
			{	
				ft_putnbr_base(va_arg(argsptr, unsigned long),
					"0123456789abcdef", &ret);
			}
			else if (str[i] == 'X')
			{
				ft_putnbr_base(va_arg(argsptr, unsigned long),
					"0123456789ABCDEF", &ret);
			}
			else
			{
				ft_putchar(str[i], &ret);
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
//  #include <stdio.h>

//  int main()
//  {
// 	 printf("%s", (char *) NULL);
// 	 return 0;
//  }