/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:06:00 by aconti            #+#    #+#             */
/*   Updated: 2023/11/06 12:20:50 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int n, int count)
{
	char	x;

	x = 48 + (n % 10);
	if (n >= 10)
		count = ft_putuns(n / 10, count);
	count += write(1, &x, 1);
	return (count);
}
