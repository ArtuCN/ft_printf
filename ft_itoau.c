/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoau.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:57:58 by aconti            #+#    #+#             */
/*   Updated: 2023/11/08 15:00:17 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len(long unsigned n)
{
	int	lunghezza;

	lunghezza = 0;
	if (n <= 0)
	{
		lunghezza++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		lunghezza++;
	}
	return (lunghezza);
}

char	*ft_itoau(unsigned int n)
{
	char				*r;
	unsigned int		l;
	long unsigned int	nb;

	nb = n;
	l = len(nb);
	r = malloc(sizeof(char) * (l + 1));
	if (r == NULL)
		return (NULL);
	if (nb == 0)
		r[0] = '0';
	r[l] = '\0';
	l--;
	while (nb > 0)
	{
		r[l] = (nb % 10) + 48;
		nb /= 10;
		l--;
	}
	return (r);
}
