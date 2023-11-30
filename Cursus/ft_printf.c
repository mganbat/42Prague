/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:38:19 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/30 12:23:10 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_convert_pf(char c, va_list arg)
{
	int	ret_len;

	ret_len = 0;
	if (c == 'c')
		ret_len += ft_putchar_pf(va_arg(arg, int));
	else if (c == 's')
		ret_len += ft_putstr_pf(va_arg(arg, char *));
	else if (c == 'p' || c == 'x' || c == 'X')
		ret_len += ft_printf_hex(va_arg(arg, size_t), c);
	else if (c == 'd')
		ret_len += ft_putnbr_pf(va_arg(arg, int));
	else if (c == 'i')
		ret_len += ft_putnbr_pf(va_arg(arg, int));
	else if (c == 'u')
		ret_len += ft_putunbr_pf(va_arg(arg, unsigned int));
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
	a3 = -4523137;
	printf("\n");
	ret = printf("%%_%\n(%p)(%x)(%X)\n", &a3, a3, a3);
	printf("or - %d\n", ret);
	ret = ft_printf("%%_%\n(%p)(%x)(%X)\n", &a3, a3, a3);
	printf("cp - %d\n", ret);
	return (0);
}
