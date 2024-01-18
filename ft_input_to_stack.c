/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_to_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:12:18 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/18 23:44:52 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_array(char **array)
{
	char	**ptr;

	ptr = array;
	if (!array)
		return ;
	while (*ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
		ptr++;
	}
	free(array);
}

t_stack	*one_input(char **av)
{
	int		i;
	int		j;
	char	**array;
	t_stack	*stack_a;

	i = 0;
	j = 0;
	stack_a = NULL;
	array = ft_split(av[1], ' ');
	while (array[i])
	{
		j = ft_atoi(array[i]);
		if (j == INT_MAX)
		{
			ft_free_array(array);
			ft_clean_all(stack_a);
			ft_error_handler(1);
		}
		ft_node_to_stack(&stack_a, ft_new_node(j));
		i++;
	}
	ft_free_array(array);
	return (stack_a);
}

t_stack	*ft_input_to_stack(int ac, char **av)
{
	t_stack	*stack_a;

	stack_a = NULL;
	if (ac < 2)
		ft_error_handler(1);
	else if (ac == 2)
		stack_a = one_input(av);
	else
		stack_a = ft_process_multiple_inputs(ac, av);
	return (stack_a);
}

t_stack	*ft_process_multiple_inputs(int ac, char **av)
{
	int		i;
	int		j;
	t_stack	*stack_a;

	i = 1;
	j = 0;
	stack_a = NULL;
	while (i < ac)
	{
		j = ft_atoi(av[i]);
		if (j == INT_MAX)
		{
			ft_clean_all(stack_a);
			ft_error_handler(1);
		}
		ft_node_to_stack(&stack_a, ft_new_node(j));
		i++;
	}
	return (stack_a);
}
