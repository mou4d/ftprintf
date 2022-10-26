/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:26:38 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/21 03:42:35 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*ret;

	ret = (unsigned char *)s;
	while (1)
	{
		if (*(ret) == (unsigned char) c)
			return ((char *) ret);
		if (*(ret) == 0)
			return (NULL);
		ret++;
	}
}
