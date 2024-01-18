/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:02:05 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/18 23:39:58 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bit_sort(t_stack **stack_a, t_stack **stack_b, int max_bits)
{
	int	i;
	int	j;
	int	current_size;
	int	nbr;

	i = 0;
	j = 0;
	while (i < max_bits)
	{
		j = 0;
		current_size = ft_stacklen(*stack_a);
		while (j < current_size)
		{
			nbr = (*stack_a)->index;
			if (((nbr >> i) & 1) == 1)
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b != NULL)
			ft_pa(stack_a, stack_b);
		i++;
	}
}

void	ft_radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	max_num;
	int	max_bits;

	size = ft_stacklen(*stack_a);
	max_num = size - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	ft_bit_sort(stack_a, stack_b, max_bits);
}
