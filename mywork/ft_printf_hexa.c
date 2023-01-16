/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:05:33 by afaqir            #+#    #+#             */
/*   Updated: 2023/01/16 11:09:10 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_tobighex(unsigned int n, int *len)
{
	if (n < 10)
		ft_putchar(n + 48, len);
	if (n < 16 && n >= 10)
		ft_putchar(n + 55, len);
	if (n >= 16)
	{
		ft_tobighex(n / 16, len);
		if (n % 16 < 10)
			ft_putchar(n % 16 + 48, len);
		else if (n % 16 < 16)
			ft_putchar(n % 16 + 55, len);
	}
}

void	ft_tohex(unsigned int n, int *len)
{
	if (n < 10)
		ft_putchar(n + 48, len);
	if (n < 16 && n >= 10)
		ft_putchar(n + 87, len);
	if (n >= 16)
	{
		ft_tohex(n / 16, len);
		if (n % 16 < 10)
			ft_putchar(n % 16 + 48, len);
		else if (n % 16 < 16)
			ft_putchar(n % 16 + 87, len);
	}
}

void	ft_putptr(unsigned long long n, int *len)
{
	if (n == 0)
	{
		*len += write(1, "0x0", 3);
		return ;
	}
	if (n < 16)
		*len += write(1, "0x", 2);
	if (n < 10)
		ft_putchar(n + 48, len);
	if (n >= 10 && n < 16)
		ft_putchar(n + 87, len);
	if (n >= 16)
	{
		ft_putptr(n / 16, len);
		if (n % 16 < 10)
			ft_putchar(n % 16 + 48, len);
		if (n % 16 >= 10 && n % 16 < 16)
			ft_putchar(n % 16 + 87, len);
	}
}
