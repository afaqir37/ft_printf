/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaqir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:02:16 by afaqir            #+#    #+#             */
/*   Updated: 2023/01/16 11:03:42 by afaqir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *s, ...);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putptr(unsigned long long n, int *len);
void	ft_put_unsigned(unsigned int n, int *len);
void	ft_tohex(unsigned int n, int *len);
void	ft_tobighex(unsigned int n, int *len);
int		ft_strlen(char *s);

#endif
