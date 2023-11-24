/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:35:32 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/24 11:35:13 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*strjoin;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	strjoin = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (strjoin == NULL)
		return (NULL);
	ft_memcpy(strjoin, s1, s1_len);
	ft_memcpy(strjoin + s1_len, s2, s2_len + 1);
	return (strjoin);
}
