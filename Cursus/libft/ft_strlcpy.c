/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:06:24 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/21 17:57:35 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t n)
{
	if (!n)
		return (ft_strlen(src));
	while (--n && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (ft_strlen(src));
}
