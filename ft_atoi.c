/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:58:14 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/18 23:36:28 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	output;

	sign = 1;
	output = 0;
	while (*str == '\f' || *str == '\n' || *str == '\r' || *str == '\t'
		|| *str == '\v' || *str == ' ')
		str++;
	if ((*str == '+' || *str == '-') && (*(str + 1) == '\0'))
		return (INT_MAX);
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (INT_MAX);
		if (output > (INT_MAX - (*str - '0')) / 10)
			return (INT_MAX);
		output = output * 10 + (*str - '0');
		str++;
	}
	return (output * sign);
}

int	ft_stacklen(t_stack *stack_a)
{
	int	len;

	len = 0;
	while (stack_a != NULL)
	{
		len++;
		stack_a = stack_a->next;
	}
	return (len);
}
