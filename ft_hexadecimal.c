/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:22:18 by aconti            #+#    #+#             */
/*   Updated: 2023/11/13 15:32:54 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned int n, char *base)
{
	int		len;
	int		i;
	char	*s;

	i = 0;
	len = 0;
	s = malloc(25);
	if (s == 0)
		return (0);
	if (n == 0)
	{
		free(s);
		return (write(1, "0", 1));
	}
	while (n > 0)
	{
		s[i] = base[n % 16];
		n /= 16;
		i++;
	}
	s[i] = 0;
	while (--i >= 0)
		len += write(1, &(s[i]), 1);
	free(s);
	return (len);
}
