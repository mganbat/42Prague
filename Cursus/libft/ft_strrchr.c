/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:12:02 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/24 11:32:19 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;
	char	*str;

	aux = NULL;
	str = (char *)s;
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
