/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:54:46 by aconti            #+#    #+#             */
/*   Updated: 2023/11/06 12:01:36 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb, int count)
{
	char	x;
	long	n;

	n = (long)nb;
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	x = 48 + (n % 10);
	if (n >= 10)
		count = ft_putnbr(n / 10, count);
	count += write(1, &x, 1);
	return (count);
}
