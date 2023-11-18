/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:14:13 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/18 20:28:31 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*t_d;
	unsigned char	*t_s;

	t_d = dest;
	t_s = src;
	while (n--)
		*t_d++ = *t_s++;
	return (dest);
}
