/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:36:46 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/30 12:21:46 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (spec == 'x' || spec == 'p')
			chr += 87;
		else if(spec == 'X')
			chr += 55;
	}
	ret_len += ft_printf_hex(nb / 16, spec);
	if (spec == 'p' && ret_len == 0)
		ret_len += ft_putstr_pf("0x");
	write(1, &chr, 1);
	ret_len++;
	return (ret_len);
}
