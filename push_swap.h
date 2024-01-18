/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:01:46 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/18 23:45:14 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct stack
{
	int				index;
	long int		num;
	struct stack	*next;
}	t_stack;

//ft_input_to_stack
void	ft_free_array(char **array);
t_stack	*ft_input_to_stack(int ac, char **av);
t_stack	*ft_process_multiple_inputs(int ac, char **av);
t_stack	*one_input(char **av);

//print_utils.c
void	putstr(char *s, int fd);

//ft_rulec.c
void	ft_sa(t_stack **stack_a);
void	ft_ra(t_stack **stack_a);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);
void	ft_pa(t_stack **stack_a, t_stack **stack_b);
void	ft_rra(t_stack **stack_a);

//ft_index.c
void	ft_bubble_sort(int num[], int n);
void	ft_indexing(t_stack *stack_a);
int		*ft_arr(t_stack *stack_a);
int		ft_indexer(int num[], int i, int j, int nbr);

//ft_sorting.c
void	ft_sort3(t_stack **stack_a);
void	ft_minitop(t_stack **stack_a, int upperlimit);
void	ft_sort5(t_stack **stack_a, t_stack **stack_b);
void	ft_sorting(t_stack **stack_a);
int		ft_stacklen(t_stack *stack_a);
int		ft_findindex(t_stack *stack_a);

//ft_radix_sort.c
void	ft_bit_sort(t_stack **stack_a, t_stack **stack_b, int max_bits);
void	ft_radix_sort(t_stack **stack_a, t_stack **stack_b);

//help_funcs.c
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
void	*ft_bzero(void *str, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strdup(const char *src);

//ft_check.c
int		ft_duplicate(t_stack *stack_a);
int		ft_sorted(t_stack *stack_a);

//ft_error_handler.c
void	ft_error_handler(int n);

//ft_node_handler.c
t_stack	*ft_new_node(int n);
t_stack	*ft_node_to_stack(t_stack **stack_a, t_stack *node);
t_stack	*ft_last_node(t_stack *stack);
void	ft_clean_all(t_stack *stack_a);

//ft_atoi.c
int		ft_atoi(const char *str);

//ft_split.c
char	**ft_split(const char *s, char c);
#endif
