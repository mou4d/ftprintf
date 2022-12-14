/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:12:39 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/26 17:46:15 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, size_t *count)
{
	long	l;

	l = nb;
	if (l < 0)
	{
		ft_putchar('-', count);
		l *= -1;
	}
	if (l > 9)
		ft_putnbr(l / 10, count);
	ft_putchar((l % 10) + '0', count);
}
