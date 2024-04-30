/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:58:42 by aconti            #+#    #+#             */
/*   Updated: 2023/11/13 15:42:08 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *s, ...);
int		ft_putstr(char *s);
int		ft_putchar(int c);
int		ft_putadrs(unsigned long long x, char *base);
int		ft_putnbr(int n, int count);
int		ft_putuns(unsigned int n, int count);
int		ft_hexadecimal(unsigned int n, char *base);
char	*ft_itoa(int n);
char	*ft_itoau(unsigned int n);
size_t	ft_strlen(const char *arg);

#endif
