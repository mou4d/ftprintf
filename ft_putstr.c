/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:12:02 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/27 00:45:48 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, size_t *count)
{
	int	i;

	if (str == NULL)
	{
		*count += write(1, "(null)", 6);
		return ;
	}
	i = 0;
	i = ft_strlen(str);
	*count += write(1, str, i);
}
