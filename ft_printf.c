/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 05:31:51 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/24 07:22:51 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long l;

	l = nb;
	if (l < 0)
	{
		ft_putchar('-');
		l *= -1;
	}
	if (l > 9)
		ft_putnbr(l/10);
	ft_putchar((l % 10 ) + '0');
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;

	if (!s)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
	{
		ret = (char *) malloc(sizeof(char));
		*ret = '\0';
		return (ret);
	}
	s = s + start;
	ret = malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	while (*s && i < len)
	{
		ret[i] = *s++;
		i++;
	}
	ret[len] = '\0';
	return (ret);
}

int ft_printf(const char *str, ...)
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
			/*if (str[i] == 'p')
			{	
				ft_putnbrbase(va_arg(argsptr, unsigned long)); // %p The void * pointer argument has to be printed in hexadecimal format.
			}*/
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
    ft_printf("testing %i or %d\n", 12357, 1337);
    ft_printf("testing one character %c\n", 'x');
    ft_printf("testing string %s", "string printed (y)");
}