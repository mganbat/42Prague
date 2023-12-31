/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:14:13 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/24 20:49:02 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*t_d;
	unsigned char	*t_s;

	if (!dest && !src)
		return (NULL);
	t_d = dest;
	t_s = (unsigned char *)src;
	while (n--)
		*t_d++ = *t_s++;
	return (dest);
}
