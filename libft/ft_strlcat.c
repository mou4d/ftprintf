/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:50:02 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/23 19:31:36 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	len_dst = ft_strlen(dst);
	i = len_dst;
	if (dstsize < len_dst)
		return (len_src + dstsize);
	len_src = ft_strlen(src);
	while (*src && i < dstsize - 1)
	{
		dst[i] = *src;
		i++;
		src ++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}

// int	main(int ac, char **av)
// {
// 	char	ftdst[] = "some test string";
// 	char	oridst[] = "some test string";

// 	if (ac > 2)
// 	{
// 		//printf("strlcat : %lu ", strlcat(oridst, av[1], ft_atoi(av[2])));
// 		printf("oridst : %s", oridst);
// 		printf("\nft_strlcat %lu ", ft_strlcat(ftdst, av[1], ft_atoi(av[2])));
// 		printf("ftdst : %s", ftdst);
// 	}	
// }
