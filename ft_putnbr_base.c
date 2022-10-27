/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:13:30 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/27 00:58:07 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long nb, char *base, size_t *count)
{
	size_t			base_len;

	base_len = ft_strlen(base) + 1;
	if (nb > (base_len - 1))
		ft_putnbr_base(nb / base_len, base, count);
	ft_putchar(base[nb % base_len], count);
}
