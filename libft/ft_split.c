/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:26:12 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/20 02:27:02 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	wordcount(char *s, char c)
{
	int		founded;
	int		i;
	size_t	j;

	j = 0;
	i = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		while (*s != c && *s)
		{
			founded = 1;
			s++;
		}
		if (founded)
			i++;
		founded = 0;
		if (*s == '\0')
			break ;
		s++;
		j++;
	}
	return (i);
}

static int	charcount(char *parm, char c, int pos)
{
	int		i;
	char	*s;
	int		wcount;

	wcount = 0;
	s = parm;
	i = 0;
	while (s[pos])
	{
		if (s[pos] != c)
			i++;
		else
			break ;
		wcount++;
		pos++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;
	int		wlen;
	int		wcount;
	int		totallen;

	totallen = ft_strlen(s);
	wcount = 0;
	wcount = wordcount((char *)s, c);
	ret = (char **) ft_calloc(wcount + 1, sizeof(char *));
	if (!ret)
		return (NULL);
	i = 0;
	wlen = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			wlen = charcount((char *)s, c, i);
			*ret = ft_calloc(wlen + 1, sizeof(char));
			*ret = ft_substr(s, i, wlen);
			i += wlen;
			ret++;
		}
		if (i >= totallen)
			break ;
		i++;
	}
	*ret = "\0";
	ret -= wcount;
	return (ret);
}
