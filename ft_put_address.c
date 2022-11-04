/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:47:44 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/31 23:14:39 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_address(void *nb, size_t *count)
{
	char			*base;
	unsigned long	ul;

	ul = (unsigned long) nb;
	base = "0123456789abcdef";
	if (ul >= 16)
		ft_put_address((void *)(ul / 16), count);
	ft_putchar(base[ul % 16], count);
}
