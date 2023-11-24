/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:24:26 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/24 11:33:33 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long long int	n;
	long long int	check;
	int				sign;

	n = 0;
	sign = 1;
	while ((*nptr && *nptr >= 9 && *nptr <= 13) || (*nptr == 32))
		nptr++;
	if (*nptr == 45 || *nptr == 43)
	{
		if (*nptr == 45)
			sign *= -1;
		nptr++;
	}
	while (*nptr && ft_isdigit(*nptr))
	{
		check = n;
		n = n * 10 + sign * (*nptr - 48);
		if (n > check && sign < 0)
			return (0);
		if (n < check && sign > 0)
			return (-1);
		nptr++;
	}
	return (n);
}
