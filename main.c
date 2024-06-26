/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:00:27 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/18 23:36:11 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack		*stack_a;

	if (ac == 1 || av[1][0] == '\0')
		exit(1);
	stack_a = ft_input_to_stack(ac, av);
	if (!stack_a)
		ft_error_handler(2);
	if (ft_duplicate(stack_a) == 0)
	{
		ft_clean_all(stack_a);
		ft_error_handler(4);
	}
	if (ft_sorted(stack_a) != 0)
		ft_sorting(&stack_a);
	ft_clean_all(stack_a);
}
