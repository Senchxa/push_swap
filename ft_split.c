/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:59:24 by dnoll             #+#    #+#             */
/*   Updated: 2023/10/31 13:07:53 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t		i;
	size_t		j;

	i = start;
	j = 0;
	if (s == 0)
	{
		return (NULL);
	}
	if (start >= ft_strlen(str))
	{
		return (ft_strdup(""));
	}
}

int	count_words(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(str[i] != '\0')
	{
		if(str[++i] == c && s[i -1] != c)
		{
			j++;
		}
	}
	return (j + 1);	
}

char	**ft_mysplit(char **split, char const *str, char c)
{
	int	i;
	int	j;
	int	sub;

	i = 0;
	j = 0;
	sub = 0;
	while(str[i] != '\0')
	{
		if (str[i] == c)
		{
			i++;
		}
		else
		{
			while(str[i] != '\0' && str[i] != c)
			{
				i++;
				j++;
			}
			split[sub] = ft_substr(str, i - j, j);
			sub++;
			j = 0;
		}
	}
	split[sub] = NULL;
	return (split);
}
char	**ft_split(char const *str, char c)
{
	char	**split;

	split = (char **)malloc(count_words(str, c) + 1);
	if (split == NULL)
	{
		return (NULL);
	}
	return (ft_split(split, s, c));

}
