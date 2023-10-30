/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:51:40 by dnoll             #+#    #+#             */
/*   Updated: 2023/10/30 17:54:21 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

typedef struct s_node
{
	int	value;
	int	index;

	struct s_node *next;
}	t_node


typedef struct s_stack
{
	int	size;

}	t_stack

#endif
