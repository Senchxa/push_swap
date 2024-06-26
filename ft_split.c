/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:02:10 by dnoll             #+#    #+#             */
/*   Updated: 2023/12/18 15:02:46 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_word_count(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		words++;
		while (*s && *s == c)
			s++;
		if (*s == '\0')
			words--;
		while (*s && *s != c)
			s++;
	}
	return (words);
}

static char	**ft_insert_string(char **result, const char *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			result[i] = ft_substr(s - len, 0, len);
			i++;
		}
		else
			s++;
	}
	result[i] = 0;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_word_count(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = ft_insert_string(result, s, c);
	return (result);
}
