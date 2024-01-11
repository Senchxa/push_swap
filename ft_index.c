/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:52:07 by dnoll             #+#    #+#             */
/*   Updated: 2024/01/10 16:17:09 by dnoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *ft_arr(stack *stack_a)
{
    int len;
    int *array;
    int i;
    
    i = 0;
    len = ft_stacklen(stack_a);
    array = malloc(sizeof(int) * (len + 1));
    if (array == NULL)
        ft_error_handler(3);
    while (stack_a != NULL)
    {
        array[i] = stack_a->num;
        stack_a = stack_a->next;
        i++;
        
    }
    return (array);
}

void ft_bubble_sort(int num[], int n)
{
    int i;
    int j;
    int temp;
    
    i = 0;
    j = 1;
    temp = 0;
    while(j < n)
    {
        i = 0;
        while (i < n - 1)
        {
            if (num[i] > num[i + 1])
            {
                temp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = temp;
            }
            i++;
        }
        j++;
    }
}

int ft_indexer(int num[], int i, int j, int nbr)
{
    int k;
    while (i <= j)
    {
        k = i + (j - i) / 2;
        if (num[k] == nbr)
            return (k);
        if (num[k] < nbr)
            i = k + 1;
        else
            j = k - 1;
    }
    return (-1);
}

void ft_indexing(stack *stack_a)
{
    printf("indexing\n");
    int i;
    int index;
    int *input;
    int size;
    int *copy;
    
    i = -1;
    index = 0;
    input = ft_arr(stack_a);
    size = ft_stacklen(stack_a);
    copy = malloc(sizeof(int) * (size + 1));
    while (i++ < size)
    {
        copy[i] = input[i];
    }
    printf("prvni smycka\n");
    ft_bubble_sort(copy, size);
    printf("buuble sort\n");
    i = 0;
    printf("i = %i size = %i\n", i ,size);
    while (i < size)
    {
        printf("jsme ve smycce\n");
        index = ft_indexer(copy, 0, size - 1, input[i]);
        printf("indexer probehl hladce\n");
        stack_a->index = index;
        stack_a = stack_a->next;
        i++;
    }
    printf("smycka ok \n");
    free(copy);
    free(input);
}