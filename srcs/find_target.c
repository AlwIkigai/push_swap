/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:00:36 by asyed             #+#    #+#             */
/*   Updated: 2024/05/02 19:16:05 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

t_stack *find_target_node(t_stack *stack_a, t_stack *stack_b)

{
    t_stack *target_node;
    t_stack *smolnbr;
    
    target_node = NULL;
    target_node = find_closest_bigger(stack_a, stack_b->rank);
    smolnbr = find_smolnbr(stack_a);

    if (target_node == NULL)
    {
        target_node = smolnbr;
    }
    ft_printf("\nthis is the stack b content: %d\n", stack_b->content);
    ft_printf("\nthis is the stack b rank: %d\n", stack_b->rank);
    ft_printf("\nthis is the current target: %d\n", target_node->content);
    ft_printf("\nthis is the target rank: %d\n", target_node->rank);
    return (target_node);
}

t_stack *find_closest_bigger(t_stack *stack_a, int  stack_b_rank)

{
    t_stack *current_a;
    t_stack *closest_bigger;
    int mini_difference;
    int difference;

    current_a = stack_a;
    closest_bigger = NULL;
    mini_difference = INT_MAX;

    while (current_a)
    {
        if (current_a->rank > stack_b_rank)
        {
            difference = current_a->rank - stack_b_rank;
            if (difference < mini_difference)
            {
                mini_difference = difference;
                closest_bigger = current_a;
            }
        }
        current_a = current_a->next;
    }
    return (closest_bigger);
}

t_stack *find_smolnbr(t_stack *stack_a)

{
    t_stack *current;
    t_stack *smolnbr;

    current = stack_a;
    smolnbr = current;
    
    while (current)
    {
        if (current->rank < smolnbr->rank)
        {
            smolnbr = current;
        }
        current = current->next;
    }
    return(smolnbr);
}