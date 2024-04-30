/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:28:43 by aconti            #+#    #+#             */
/*   Updated: 2023/11/25 15:46:01 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadrs(unsigned long long x, char *base)
{
	int			l;
	char		*s;
	int			i;

	i = 0;
	l = 2;
	if (x == 0)
		return (write (1, "(nil)", 5));
	s = malloc(25);
	if (s == 0)
		return (0);
	write (1, "0x", 2);
	while (x != 0)
	{
		s[i] = base[x % 16];
		x /= 16;
		i++;
	}
	s[i] = 0;
	while (--i >= 0)
		l += write(1, &(s[i]), 1);
	free(s);
	return (l);
}
