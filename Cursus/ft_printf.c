/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:38:19 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/30 13:07:10 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_printf_hex(size_t nb, char spec)
{
	size_t	chr;
	int		ret_len;

	ret_len = 0;
	if (nb == 0)
		return (0);
	chr = nb % 16;
	if (chr < 10)
		chr += 48;
	else
	{
		if (spec == 'X')
			chr += 55;
		else
			chr += 87;
	}
	ret_len += ft_printf_hex(nb / 16, spec);
	if (spec == 'p' && ret_len == 0)
		ret_len += ft_putstr_pf("0x");
	write(1, &chr, 1);
	ret_len++;
	return (ret_len);
}

int	ft_convert_pf(char c, va_list arg)
{
	int	ret_len;

	ret_len = 0;
	if (c == 'c')
		ret_len += ft_putchar_pf(va_arg(arg, int));
	else if (c == 's')
		ret_len += ft_putstr_pf(va_arg(arg, char *));
	else if (c == 'p')
		ret_len += ft_printf_hex(va_arg(arg, size_t), c);
	else if (c == 'x' || c == 'X')
		ret_len += ft_printf_hex(va_arg(arg, unsigned int), c);
	else if (c == 'd')
		ret_len += ft_putnbr_pf(va_arg(arg, int));
	else if (c == 'i')
		ret_len += ft_putnbr_pf(va_arg(arg, int));
	else if (c == 'u')
		ret_len += ft_putnbr_pf(va_arg(arg, unsigned int));
	else if (c == '%')
		ret_len += ft_putchar_pf(c);
	else
	{
		ret_len += ft_putchar_pf('%');
		ret_len += ft_putchar_pf(c);
	}
	return (ret_len);
}

int	ft_printf(const char *str, ...)
{
	int		ret_len;
	va_list	arglist;

	ret_len = 0;
	va_start(arglist, str);
	while (*str)
	{
		if (*str == '%')
		{
			if (!*(str + 1))
				return (-1);
			ret_len += ft_convert_pf(*(str + 1), arglist);
			str++;
		}
		else
			ret_len += ft_putchar_pf(*str);
		if (*str)
			str++;
	}
	va_end(arglist);
	return (ret_len);
}

int	main(void)
{
	int		ret;
	char	a1;
	char	*a2;
	int		a3;

	a1 = '%';
	a2 = "String";
	a3 = 2147483956;
	printf("\n");
	ret = printf("-%d, %i, %u\n", a3, a3, a3);
	printf("or - %d\n", ret);
	ret = ft_printf("+%d, %i, %u\n", a3, a3, a3);
	printf("cp - %d\n", ret);
	return (0);
}
