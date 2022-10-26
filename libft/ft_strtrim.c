/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:02:05 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/21 03:49:08 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

static int	l_trim(char const *s, char const *set)
{
	int		i;
	int		start;

	i = 0;
	while (s[i])
	{
		if (ft_strchr(set, s[i]) != 0)
		{
			start = i + 1;
			i++;
		}
		else
			break ;
	}
	return (start);
}

static int	r_trim(char const *s, char const *set)
{
	size_t	i;
	int		end;

	end = 0;
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (ft_strchr(set, s[i]) != 0)
		{
			end++;
			i--;
		}
		else
			break ;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	start = l_trim(s1, set);
	end = r_trim(s1, set);
	ret = ft_substr(s1, start, ft_strlen(s1) - (end + start));
	return (ret);
}

// int	main(int ac, char **av)
// {
// 	// if (ac > 2)
// 	// {
// 	// 	printf("%s", ft_strtrim(av[1], av[2]));
// 	// }
// 	// return (0);
// 	char    *strtrim;
// 	int             arg;

// 	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
// 	printf("1%s\n", ft_strtrim(s1, " "));

// 	char s2[] = "lorem ipsum dolor sit amet";
// 	printf("2%s\n", ft_strtrim(s2, "te"));

// 	char s3[] = " lorem ipsum dolor sit amet";
// 	printf("3%s\n", ft_strtrim(s3, "l "));

// 	char s4[] = "lorem ipsum dolor sit amet";
// 	printf("4%s\n", ft_strtrim(s4, "tel"));

// 	char s5[] = "          ";
// 	printf("5%s\n", ft_strtrim(s5, " "));
// 	return (0);
// }
