/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:01:46 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/15 15:30:41 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>


//stdio
# include <stdio.h>

typedef struct stack
{
    long int num;
    int     index;
    struct stack *next;
} stack;

//ft_input_to_stack
void ft_free_array(char **array);
stack* ft_input_to_stack(int ac, char **av);
stack* one_input(char **av);

//print_utils.c
void	putstr(char *s, int fd);

//ft_rulec.c
void    ft_sa(stack **stack_a);
void ft_ra(stack **stack_a);
void ft_pb(stack **stack_a, stack **stack_b);
void ft_pa(stack **stack_a, stack **stack_b);
void ft_rra(stack **stack_a);

//ft_index.c
void ft_bubble_sort(int num[], int n);
void ft_indexing(stack *stack_a);
int* ft_arr(stack *stack_a);
int ft_indexer(int num[], int i, int j, int nbr);


//ft_sorting.c
void ft_sort3(stack **stack_a);
void ft_minitop(stack **stack_a, int upperlimit);
void    ft_sort5(stack **stack_a, stack **stack_b);
void ft_sorting(stack **stack_a);
int ft_stacklen(stack *stack_a);
int ft_findindex(stack *stack_a);

//ft_radix_sort.c
void ft_bit_sort(stack **stack_a, stack **stack_b, int max_bits);
void ft_radix_sort(stack **stack_a, stack **stack_b);



//help_funcs.c
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
void	*ft_bzero(void *str, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strdup(const char *src);

//ft_check.c
int ft_duplicate(stack *stack_a);
int ft_sorted(stack *stack_a);



//ft_error_handler.c
void    ft_error_handler(int n);

//ft_node_handler.c
stack* ft_new_node(int n);
stack* ft_node_to_stack(stack **stack_a, stack *node);
stack* ft_last_node(stack *stack);
void ft_clean_all(stack *stack_a);

//ft_atoi.c
int	ft_atoi(const char *str);

//ft_split.c
char **ft_split(const char *s, char c);
#endif