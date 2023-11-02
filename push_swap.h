/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:51:40 by dnoll             #+#    #+#             */
/*   Updated: 2023/11/02 11:33:22 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>


typedef struct s_stack
{
	int	size;
	int	index;

	t_stack	*next;

}	t_stack

int	ft_strlen(char *str);
int	count_words(const char *str, char c);

char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strdup(const char *str);
char	**ft_mysplit(char **split, char const *str, char c);
char	**ft_split(char const *str, char c);
#endif
