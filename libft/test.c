/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 02:26:57 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/13 03:15:47 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char *str, char d)
{
	size_t	i;
	int		wcount;
	int		founded;

	wcount = 0;
	i = 0;
	founded = 0;
	while (*str)
	{
		if (*str == d)
			founded = 1;
		
	}
	return (wcount);
}

// char	**ft_split(char *s, char c)
// {

// }

#include <stdio.h>
int	main ()
{
	int	count = 0;
	char *s = "  testing ft split word counter   ";

	printf("%d\n", word_count(s, ' '));
}
