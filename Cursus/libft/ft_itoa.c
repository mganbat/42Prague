/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:39:23 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/22 23:20:24 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(long int *d, int *sign)
{
	long int	n;
	int			len;

	n = *d;
	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		*d = n;
		*sign = 1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*number;
	int			string_lenght;
	int			sign;
	long int	d;

	sign = 0;
	d = (long int)n;
	string_lenght = digit_count(&d, &sign);
	number = (char *)malloc(sizeof(char) * (string_lenght + 1));
	if (!number)
		return (NULL);
	number[string_lenght] = '\0';
	while (string_lenght-- > sign)
	{
		number[string_lenght] = d % 10 + '0';
		d = d / 10;
	}
	if (sign)
		number[0] = '-';
	return (number);
}
