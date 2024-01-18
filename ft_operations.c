/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:16:22 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/18 23:39:35 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = *stack_a;
	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	(*stack_a) = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	write(1, "sa\n", 3);
}

void	ft_ra(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = *stack_a;
	if (!stack_a || !(*stack_a)->next)
		return ;
	(*stack_a) = ft_last_node(*stack_a);
	(*stack_a)->next = tmp;
	*stack_a = tmp->next;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = *stack_b;
	if (!*stack_a)
		return ;
	*stack_b = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_b)->next = tmp;
	write(1, "pb\n", 3);
}

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = (*stack_a);
	if (!(*stack_b))
		return ;
	(*stack_a) = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	(*stack_a)->next = tmp;
	write(1, "pa\n", 3);
}

void	ft_rra(t_stack **stack_a)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *stack_a;
	if (!stack_a || !(*stack_a)->next)
		return ;
	while ((*stack_a)->next)
	{
		*stack_a = (*stack_a)->next;
		i++;
	}
	(*stack_a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	write(1, "rra\n", 4);
}
