/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_handler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:04:48 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/02 14:58:15 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


stack* ft_last_node(stack *stack)
{
    if(stack == NULL)
        ft_error_handler(3);
    while(stack->next != NULL)
    {
        stack = stack->next;
    }
    return (stack);
}

stack* ft_new_node(int n)
{
    stack *node;
    node = malloc(sizeof(stack));
    if(node == NULL)
    {
        ft_error_handler(3);
    }
    node->num = n;
    node->next = NULL;
    return (node);   
}

stack* ft_node_to_stack(stack **stack_a, stack *node)
{
    if(stack_a == NULL)
        ft_error_handler(2);
    else if (*stack_a == NULL)
        *stack_a = node;
    else
    {
        ft_last_node(*stack_a)->next = node;
        node->next = NULL;
    }
    return (0);
}

void ft_clean_all(stack *stack_a)
{
    stack *next_node;
    
    if(!stack_a)
        return;
    while(stack_a != NULL)
    {
        next_node = stack_a->next;
        free(stack_a);
        stack_a = next_node;
    }
}