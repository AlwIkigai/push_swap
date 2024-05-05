/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target_and_cost.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:59:09 by asyed             #+#    #+#             */
/*   Updated: 2024/05/05 14:49:28 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void    find_target_and_calculate_cost(t_stack **stack_a, t_stack **stack_b)

{
    t_stack *current_b;
    t_stack *target_node;

    int cost;
    
    current_b = *stack_b;
    while (current_b)
    {
        ft_printf("Indices before update:\n");
        print_indices(*stack_a);
        print_indices(*stack_b);
        
        find_index_position(stack_a);
        find_index_position(stack_b);


        
        ft_printf("Indices after update:\n");
        print_indices(*stack_a);
        print_indices(*stack_b);
        
        target_node = find_target_node(*stack_a, current_b);
        cost = calculate_cost(target_node, *stack_a, *stack_b);
        
        ft_printf("Cost to move target node %d: %d\n", target_node->content, cost);

        current_b = current_b->next;
    }  
}

void print_indices(t_stack *stack)
{
    t_stack *current = stack;

    // Iterate through each node in the stack and print its index
    while (current)
    {
        ft_printf("Index: %d\n", current->index);
        current = current->next;
    }
    ft_printf("\n");
}

