/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:14:27 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/21 17:57:22 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	chr;

	chr = (char)c;
	while (*str != '\0' && *str != chr)
		str++;
	if (*str == chr)
		return (str);
	else
		return (NULL);
}
