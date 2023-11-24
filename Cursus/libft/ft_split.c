/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:22:12 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/23 17:35:43 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	res;
	int	i;
	int	j;

	i = 0;
	res = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c && s[i + j] != 0)
				j++;
			res++;
			i = i + j;
		}
		else
			i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		j;
	int		word;

	res = (char **)malloc(sizeof(char *) * ft_wordcount(s, c));
	if (!s || !res)
		return (NULL);
	word = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			j = 0;
			while (*(s + j) != c && *(s + j) != 0)
				j++;
			res[word++] = ft_substr(s, 0, j);
			s += j;
		}
		else
			s++;
	}
	return (res);
}
