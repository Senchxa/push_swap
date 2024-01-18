/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:58:14 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/17 17:08:29 by dnoll            ###   ########.fr       */
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
	if (*str == '-')
		sign *= -1;
	/*if (*str == '+' || *str == '-')
	{
		if(*(str + 1) == '\0')
			;
		str++;
	}*/
	while (*str)
	{
		/*if (*str < '0' || *str > '9')
			{
				ft_error_handler(1);
			}
		if (output > (INT_MAX - (*str - '0')) / 10)
			{
				ft_error_handler(1);
			}
		*/
		output = output * 10 + (*str - '0');
		str++;
	}
	return (output * sign);
}