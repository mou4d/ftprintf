/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:13:30 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/26 19:01:38 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nb, char *base, size_t *count)
{
	unsigned long	l;
	size_t			base_len;

	base_len = ft_strlen(base) + 1;
	l = nb;
	if (l > (base_len - 1))
		ft_putnbr_base(l / base_len, base, count);
	ft_putchar(base[l % base_len], count);
}
