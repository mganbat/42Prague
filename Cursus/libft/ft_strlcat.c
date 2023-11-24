/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:03:29 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/21 17:57:31 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		d_lenght;
	size_t		total_l;
	const char	*s;

	if ((!dest || !src) && !n)
		return (0);
	s = src;
	d_lenght = 0;
	while (*(dest + d_lenght) && d_lenght < n)
		d_lenght++;
	if (d_lenght < n)
		total_l = d_lenght + ft_strlen(s);
	else
		return (n + ft_strlen(s));
	while (*s && (d_lenght + 1) < n)
	{
		*(dest + d_lenght) = *s++;
		d_lenght++;
	}
	*(dest + d_lenght) = '\0';
	return (total_l);
}
