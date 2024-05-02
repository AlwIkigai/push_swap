/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index_median.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:23:23 by asyed             #+#    #+#             */
/*   Updated: 2024/05/02 19:24:37 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

int find_median_position(t_stack **stack)

{
    int stack_len;
    int median;
    stack_len = ft_lstsizeps(*stack);
    median = (int)(stack_len / 2);
    return (median);
}

void    find_index_position(t_stack **stack)

{
    t_stack *current;
    int index;

    current = *stack;
    index = 0;
    while (current != NULL)
    {
        current->index = index;
        current = current->next;
        index++;
    }
}
