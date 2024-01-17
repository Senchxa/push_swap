/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:10:20 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/17 16:00:23 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_duplicate(stack *stack_a)
{
    stack *tmp;
    
    while(stack_a != NULL)
    {
        tmp = stack_a->next;
        while(tmp != NULL)
        {
            if(tmp->num == stack_a->num)
                return (0);
            tmp = tmp->next;
        }
        stack_a = stack_a->next;
    }
    return (1);
    
}

int ft_sorted(stack *stack_a)
{
    stack *tmp;
    while(stack_a != NULL)
    {
        tmp = stack_a->next;
        while (tmp)
        {
            if(tmp->num < stack_a->num)
                return (1);
            tmp = tmp->next;
        }
        stack_a = stack_a->next;
        
    }
    return (0);
}