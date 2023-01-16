/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nums.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:09:37 by afaqir            #+#    #+#             */
/*   Updated: 2023/01/16 11:10:54 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	if (n == INT_MIN)
	{
		ft_putstr("-2147483648", len);
		return ;
	}
	if (n < 0)
	{
		*len += write(1, "-", 1);
		n *= -1;
	}
	if (n <= 9)
		ft_putchar(n + 48, len);
	if (n >= 10)
	{
		ft_putnbr(n / 10, len);
		ft_putchar(n % 10 + 48, len);
	}
}

void	ft_put_unsigned(unsigned int n, int *len)
{
	if (n < 10)
		ft_putchar(n + 48, len);
	if (n >= 10)
	{
		ft_put_unsigned(n / 10, len);
		ft_putchar(n % 10 + 48, len);
	}
}
