/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:29:12 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/21 17:57:12 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*t_d;
	unsigned char	*t_s;

	t_d = dest;
	t_s = src;
	if (dest == NULL || src == NULL)
		return (NULL);
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
