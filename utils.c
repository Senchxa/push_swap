/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:42:33 by dnoll             #+#    #+#             */
/*   Updated: 2023/10/31 13:00:12 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str) + 1;
	p = (char *)malloc(j);
	if (p == NULL)
	{
		return (NULL);
	}
	while(str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
