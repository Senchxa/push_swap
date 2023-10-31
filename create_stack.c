/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:59:10 by dnoll             #+#    #+#             */
/*   Updated: 2023/10/31 13:49:04 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	res = 0;
	sign = 1;
	while (*str <= 32)
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		result = result * 10 + *str - 48;
		str++;
	}
	return (result * sign);
}

t_stack	*single_input(char **av)
{
	int	i;
	int	j;
	char	**arr;
	t_stack	*stack_a;

	i = 0;
	j = 0;
	stack_a = NULL;
	arr = ft_split(av[1], ' ');
	while (arr[i] != '\0')
	{
		j = ft_atoi(arr[i]);
		/*node to stack*/;
		i++;
	}
	/*free arr*/;
	return (stack_a);
}

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
		stack_a = single_input(av);
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
