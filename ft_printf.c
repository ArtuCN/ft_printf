/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:26:02 by aconti            #+#    #+#             */
/*   Updated: 2023/11/13 16:10:38 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_cases(va_list args, const char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		len += ft_putadrs(va_arg(args, unsigned long long), "0123456789abcdef");
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(args, int), 0);
	else if (c == 'u')
		len += ft_putuns(va_arg(args, unsigned int), 0);
	else if (c == 'x')
		len += ft_hexadecimal(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		len += ft_hexadecimal(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
	{
		write(1, "%", 1);
		len++;
	}
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int			i;
	va_list		args;
	int			len;

	len = 0;
	i = 0;
	va_start(args, s);
	while (s[i] != 0)
	{
		if (s[i] == '%')
		{
			len += ft_cases(args, s[i + 1]);
			i++;
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (len);
}
