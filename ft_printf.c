/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 05:31:51 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/11/04 02:14:47 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	helper(char c, va_list ptr, size_t	*count)
{
	if (c == 'c')
		ft_putchar(va_arg(ptr, int), count);
	else if ((c == 'd') || (c == 'i'))
		ft_putnbr(va_arg(ptr, int), count);
	else if (c == 'u')
		ft_putnbr_base(va_arg(ptr, unsigned int), "0123456789", count);
	else if (c == 'x')
		ft_putnbr_base(va_arg(ptr, unsigned int), "0123456789abcdef", count);
	else if (c == 'X')
		ft_putnbr_base(va_arg(ptr, unsigned int), "0123456789ABCDEF", count);
	else if (c == 's')
		ft_putstr(va_arg(ptr, char *), count);
	else if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_put_address(va_arg(ptr, void *), count);
	}
	else if (c == '%')
		ft_putchar(c, count);
}

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
			helper(str[i], argsptr, &ret);
		}
		else
			ft_putchar(str[i], &ret);
		if (str[i] != '\0')
			i++;
		else
			break ;
	}
	va_end(argsptr);
	return (ret);
}
