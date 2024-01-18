/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_to_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:12:18 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/17 15:45:09 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//standalone + or -
void ft_plus_minus_check(char **array)
{
    int i;

    i = 0;
    while (array[i])
    {
        if((array[i][0] == '+' || array[i][0] == '-') && array[i][1] == '\0')
            {
                ft_free_array(array);
                ft_error_handler(1);
            }
            i++;
    }
}

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
    ft_plus_minus_check(array);
   
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