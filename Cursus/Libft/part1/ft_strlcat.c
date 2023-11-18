/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:03:29 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/18 22:57:43 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		d_l;
	size_t		t_l;
	const char	*s;

	if ((!dest || !src) && !n)
		return (0);
	s = src;
	d_l = 0;
	while (*(dest + d_l) && d_l < n)
		d_l++;
	if (d_l < n)
		t_l = d_l + ft_strlen(s);
	else
		return (n + ft_strlen(s));
	while (*s && (d_l + 1) < n)
	{
		*(dest + d_l) = *s++;
		d_l++;
	}
	*(dest + d_l) = '\0';
	return (t_l);
}
