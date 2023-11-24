/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:29:12 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/24 20:49:55 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*t_d;
	const unsigned char	*t_s;

	if (!dest && !src)
		return (NULL);
	t_d = (unsigned char *)dest;
	t_s = (unsigned char *)src;
	if (t_d == t_s || n == 0)
		return (dest);
	if (t_d < t_s)
		while (n--)
			*t_d++ = *t_s++;
	else
		while (n--)
			t_d[n] = t_s[n];
	return (dest);
}
