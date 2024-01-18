/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:26:49 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/18 20:01:40 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_error_handler(int n)
{
    if(n == 1)
        putstr("Wrong input\n", 1);
    else if (n == 2)
        putstr("Stack is empty\n", 1);
    else if(n == 3)
        putstr("Malloc error\n", 1);
    else if(n == 4)
        putstr("Duplicate error\n", 1);
    exit(1);
}