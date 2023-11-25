/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:12:02 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/25 16:37:49 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*rear;
	char	*str;

	rear = NULL;
	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			rear = str;
		str++;
	}
	if (*str == (char)c)
		return (str);
	else
		return (rear);
}
