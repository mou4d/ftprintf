/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:13:30 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/31 23:00:21 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nb, char *base, size_t *count)
{
	size_t			base_len;

	base_len = ft_strlen(base);
	if (nb >= base_len)
		ft_putnbr_base(nb / base_len, base, count);
	ft_putchar(base[nb % base_len], count);
}
