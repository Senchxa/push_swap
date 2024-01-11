/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_to_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:12:18 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/03 16:36:24 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*predelat ft_atoi a ft_split!
!
!
!*/

#include "push_swap.h"

void ft_free_array(char **array)
{
    char **ptr;
    
    ptr = array;
    if(!array)
        return ;
    while (*ptr != NULL)
    {
        free(*ptr);
        *ptr = NULL;
        ptr++;
    }
    free(array);
}

stack* one_input(char **av)
{
    int i;
    int j;
    char **array;
    stack *stack_a;
    
    i = 0;
    j = 0;
    stack_a = NULL;
    array = ft_split(av[1], ' ');
    while(array[i])
    {   
        j = ft_atoi(array[i]);
        ft_node_to_stack(&stack_a, ft_new_node(j));
        i++;
    }
    ft_free_array(array);
    return (stack_a);
}

stack* ft_input_to_stack(int ac, char **av)
{
    int i;
    int j;
    stack *stack_a;
    
    i = 1;
    j = 0;
    stack_a = NULL;
    if(ac < 2)
    {
        ft_error_handler(1);
    }
    else if(ac == 2)
    {
        stack_a = one_input(av);
    }
    else
    {
        while (i < ac)
        {
            j = ft_atoi(av[i]);
            ft_node_to_stack(&stack_a, ft_new_node(j));
            i++;
        }
    }
    
    return (stack_a);
    
    
    
}