/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:28:14 by dnoll             #+#    #+#             */
/*   Updated: 2023/11/03 12:27:13 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;

	stack_a = create_stack(ac, av);
	
	if (!stack || check_dup(stack_a) == 1)
	{
		free_stack(&stack_a);

	}
	if (check_sorted(stack_a) != 1)
	{
		/*sort(&stack_a);*/
	}

}
