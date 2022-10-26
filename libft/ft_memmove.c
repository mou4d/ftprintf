/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 04:11:45 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/08 05:30:07 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dstp;
	unsigned char		*srcp;

	dstp = (unsigned char *) dst;
	srcp = (unsigned char *) src;
	if (!dst && !src)
		return (0);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len > 0)
	{
		len--;
		dstp[len] = srcp[len];
	}
	return (dst);
}
