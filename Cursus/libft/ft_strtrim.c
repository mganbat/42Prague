/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:50:58 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/24 11:34:57 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*s2;

	i = 0;
	s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (s2 == NULL)
		return (NULL);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	while (s2[i])
	{
		j = 0;
		while (s2[i + j] == set[j])
		{
			if (set[j + 1] == '\0')
			{
				ft_memcpy(&s2[i], &s2[i + j + 1], ft_strlen(s1) - i);
				i--;
			}
			j++;
		}
		i++;
	}
	return (s2);
}
