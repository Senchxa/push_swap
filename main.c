/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:00:27 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/10 16:00:15 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    stack *stack_a;
    
    stack_a = ft_input_to_stack(ac, av);
    
    if (!stack_a)
        ft_error_handler(2);
    if (ft_duplicate(stack_a) == 1)
        {
            ft_clean_all(stack_a);
            ft_error_handler(4);
        }
    if (ft_sorted(stack_a) != 1)
    {
        if(ac == 4)
        {
            ft_sort3(&stack_a);
        }
        else
        {
            ft_sorting(&stack_a);
        }
    }
    ft_clean_all(stack_a);
}