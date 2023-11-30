/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libftutils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:36:46 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/30 11:40:34 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_pf(char *s)
{
	int	ret_len;

	ret_len = 0;
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
		ret_len++;
	}
	return (ret_len);
}

int	ft_putunbr_pf(unsigned int n)
{
	char	c;
	int		ret_len;

	ret_len = 0;
	if (n >= 10)
		ret_len += ft_putunbr_pf(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	ret_len++;
	return (ret_len);
}

int	ft_putnbr_pf(int n)
{
	char	c;
	int		ret_len;

	ret_len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		ret_len++;
	}
	if (n >= 10)
		ret_len += ft_putnbr_pf(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	ret_len++;
	return (ret_len);
}
