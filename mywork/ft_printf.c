/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:57:02 by afaqir            #+#    #+#             */
/*   Updated: 2023/01/16 11:01:49 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_checkarg(char c, va_list argv, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(argv, int), len);
	if (c == 's')
		ft_putstr(va_arg(argv, char *), len);
	if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(argv, int), len);
	if (c == 'X')
		ft_tobighex(va_arg(argv, unsigned int), len);
	if (c == 'x')
		ft_tohex(va_arg(argv, unsigned int), len);
	if (c == 'p')
		ft_putptr(va_arg(argv, unsigned long long), len);
	if (c == 'u')
		ft_put_unsigned(va_arg(argv, unsigned int), len);
	if (c == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *s, ...)
{
	va_list	argv;
	int		len;

	len = 0;
	va_start(argv, s);
	while (*s)
	{
		if (*s == '%')
			ft_checkarg(*++s, argv, &len);
		else
			ft_putchar(*s, &len);
		s++;
	}
	va_end(argv);
	return (len);
}
