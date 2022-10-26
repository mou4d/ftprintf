/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 01:11:41 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/23 19:49:03 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *) haystack);
	while ((len > 0) && *haystack)
	{
		i = 0;
		while ((needle[i] == *haystack) && needle[i])
		{
			i++;
		}
		if (i == nlen)
			return ((char *) haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
