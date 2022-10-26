/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:02:47 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/14 06:08:53 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charcount(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		size;
	int		sign;
	long	num;

	sign = 1;
	num = n;
	if (num < 0)
		sign = -1;
	num *= sign;
	size = charcount(num);
	if (sign == -1)
		size++;
	ret = ft_calloc((size + 1), sizeof(char));
	if (!ret)
		return (NULL);
	while (--size >= 0)
	{
		ret[size] = (num % 10) + 48;
		num = num / 10;
	}
	if (sign == -1)
		*ret = '-';
	return (ret);
}
