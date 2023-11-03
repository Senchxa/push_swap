/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:22:46 by dnoll             #+#    #+#             */
/*   Updated: 2023/11/03 12:26:20 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_stack *stack)
{
	t_stack	*tmp;

	while(stack)
	{
		tmp = stack->next;
		while(tmp)
		{
			if (tmp->num < stack->num)
			{
				return (0);
			}
			tmp = tmp->next'
		}
		stack = stack->next;
	}
	return (1);
}

t_stack	*node_to_stack(t_stack **stack, t_stack *node)
{
	if (stack == NULL)
	{
		return (NULL);
	}
	else if (*stack == NULL)
	{
		*stack = node;
	}
	else
	{
		last_node(*stack)->next = node;
		node->next = NULL;

	}
}

t_stack	*last_node(t_stack *stack)
{
	if(stack == NULL)
	{
		return (NULL);
	}
	while (stack -> next)
	{
		stack = stack->next;
		return (stack);
	}
}

void	print_stack(t_stack *stack)
{
	while (stack != NULL)
	{
		printf("%lld", stack->num);
		stack = stack->next;
	}
}
