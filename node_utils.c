/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:22:46 by dnoll             #+#    #+#             */
/*   Updated: 2023/11/01 18:26:32 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	{/*
	
	node->next = NULL
	*/
	}
}
