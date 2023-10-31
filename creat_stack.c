/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:59:10 by dnoll             #+#    #+#             */
/*   Updated: 2023/10/31 13:17:27 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(int ac, char **av)
{
	int	i;
	int	j;
	t_stack	stack_a;

	i = 1;
	j = 0;
	stack_a = NULL;
	if (ac < 2)
	{
		return(0);
	}
	else if (ac == 2)
	{
		stack_a = /*single input*/;
	}
	else
	{
		while (i < ac)
		{
			/*node to stack*/;
			i++;
		}
	}
	return (stack_a);
}
