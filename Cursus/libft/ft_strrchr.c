/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:12:02 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/21 17:57:51 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*aux;
	char	chr;

	aux = NULL;
	chr = (char)c;
	while (*str)
	{
		if (*str == c)
			aux = str;
		str++;
	}
	if (*str == c)
		return (str);
	else
		return (aux);
}
