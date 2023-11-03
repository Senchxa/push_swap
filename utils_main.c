/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:04:39 by dnoll             #+#    #+#             */
/*   Updated: 2023/11/03 12:18:21 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(t_stack *stack_A)
{
	t_stack	*tmp;
	while (stack_A != NULL)
	{
		tmp = stack_A->next;
		while (tmp != NULL)
		{
			if (tmp->num == stack_A->num)
			{
				return (1);
			}
			tmp = tmp->next;
		}
		stack_A = stack_A->next;
	}
	return (0);
}

void	free_stack(t_stack **nodes)
{
	t_stack	*next_node;

	if(!nodes)
	{
		return ;
	}
	while (*nodes)
	{
		next_node = (*nodes)->next;
		(*nodes)-> = 0;
		free(*nodes);
		(*nodes) = next_node;
	}
}
