/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:15:00 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/05 21:52:17 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ret;
	size_t			i;

	i = 0;
	ret = (unsigned char *) s;
	if (n != 0)
	{
		while (i++ < n)
		{
			if (*ret == (unsigned char) c)
				return ((void *) ret);
			ret++;
		}
	}
	return (0);
}
