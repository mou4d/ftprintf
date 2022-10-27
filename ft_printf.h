/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 05:35:19 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/27 00:52:13 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(char *s);
void	ft_putchar(char c, size_t *count);
void	ft_putstr(char *str, size_t *count);
void	ft_putnbr(int nb, size_t *count);
void	ft_putnbr_base(unsigned long nb, char *base, size_t *count);
int		ft_printf(const char *str, ...);

#endif