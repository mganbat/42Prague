/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganbat <mganbat@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:22:12 by mganbat           #+#    #+#             */
/*   Updated: 2023/11/25 23:07:47 by mganbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_arr_count(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static size_t	ft_arr_len(char const *s, char c)
{
	if (!ft_strchr(s, c))
		return (ft_strlen(s));
	return (ft_strchr(s, c) - s);
}

static int	ft_arr_alloc(char **lst, size_t index, size_t arr_len)
{
	size_t	i;

	i = 0;
	lst[index] = (char *)malloc(sizeof(char) * (arr_len + 1));
	if (!lst[index])
	{
		while (i < index)
		{
			free(lst[i]);
			i++;
		}
		free(lst);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	arr_len;
	int		i;

	lst = (char **)malloc((ft_arr_count(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			arr_len = ft_arr_len(s, c);
			if (ft_arr_alloc(lst, i, arr_len) == 0)
				return (NULL);
			ft_strlcpy(lst[i++], s, arr_len + 1);
			s += arr_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}
