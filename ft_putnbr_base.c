/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:13:30 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/25 22:13:42 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(unsigned int nb, int base)
{
	unsigned long	l;
	char			*base_chars;

	if (base == 10)
		base_chars = "0123456789";
	if (base == 16)
		base_chars = "0123456789abcdef";
	l = nb;
	if (l > base - 1)
		ft_putnbr_base(l / base, base);
	ft_putchar(base_chars[(l % base)]);
}
