/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:10:41 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/18 23:40:57 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort3(t_stack **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->num;
	b = (*stack_a)->next->num;
	c = (*stack_a)->next->next->num;
	if (a > b && b > c)
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
	}
	else if (a > b && b < c && a > c)
		ft_ra(stack_a);
	else if (a < b && b > c && a > c)
		ft_rra(stack_a);
	else if (a > b && b < c)
		ft_sa(stack_a);
	else if (a < b && b > c)
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
}

void	ft_minitop(t_stack **stack_a, int upperlimit)
{
	int		min;
	int		movecounter;
	t_stack	*tmp;

	tmp = *stack_a;
	movecounter = 1;
	min = ft_findindex(*stack_a);
	while ((*stack_a)->num != min)
	{
		*stack_a = (*stack_a)->next;
		movecounter++;
	}
	*stack_a = tmp;
	if (movecounter <= 3)
		while (movecounter != 1)
		{
			ft_ra(stack_a);
			movecounter--;
		}
	else
		while (movecounter != upperlimit)
		{
			ft_rra(stack_a);
			movecounter++;
		}
}

void	ft_sort5(t_stack **stack_a, t_stack **stack_b)
{
	ft_minitop(stack_a, 6);
	ft_pb(stack_a, stack_b);
	ft_minitop(stack_a, 5);
	ft_pb(stack_a, stack_b);
	ft_sort3(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

int	ft_findindex(t_stack *stack_a)
{
	int	min;

	min = stack_a->num;
	while (stack_a != NULL)
	{
		if (stack_a->num < min)
			min = stack_a->num;
		stack_a = stack_a->next;
	}
	return (min);
}

void	ft_sorting(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (ft_stacklen(*stack_a) == 2)
		ft_sa(stack_a);
	else if (ft_stacklen(*stack_a) == 3)
		ft_sort3(stack_a);
	else
	{
		ft_indexing(*stack_a);
		if (ft_stacklen(*stack_a) == 5)
		{
			ft_sort5(stack_a, &stack_b);
		}
		else
			ft_radix_sort(stack_a, &stack_b);
	}
}
