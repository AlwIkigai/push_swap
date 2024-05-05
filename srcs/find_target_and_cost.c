/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target_and_cost.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:59:09 by asyed             #+#    #+#             */
/*   Updated: 2024/05/05 23:12:07 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void    find_target_and_calculate_cost(t_stack **stack_a, t_stack **stack_b)

{
    t_stack *current_b;
    t_stack *target_node;
    t_stack *cheapest_target;
    int cost;
    int lowest_cost;
    int stack_b_len;
    
    current_b = *stack_b;
    stack_b_len = ft_lstsizeps(*stack_b);
    lowest_cost = INT_MAX;
    cheapest_target = NULL;
    ft_printf("this is current state of stack_a: \n\n"); // 
    ft_lstprint(*stack_a);                               // see stack
    ft_printf("this is current state of stack_b: \n\n"); // start state
    ft_lstprint(*stack_b);                               // see stack
    while (current_b)
    {
        find_index_position(stack_a);
        find_index_position(stack_b);
        
        target_node = find_target_node(*stack_a, current_b);
        cost = calculate_cost(target_node, *stack_a, current_b, stack_b_len);
        ft_printf("\ncurrent_b_content: %d\ncurrent_b_index: %d\ncurrent_b_rank: %d\n", current_b->content, current_b->index,  current_b->rank);
        ft_printf("\ntarget node closest bigger or smolest content: %d\ncurrent_b_target_index_position: %d\ntarget_node_rank: %d\n", target_node->content, target_node->current_b_target_position, target_node->rank);
        ft_printf("\ncost: %d\n", cost);
        if (cost < lowest_cost)
        {
            lowest_cost = cost;
            cheapest_target = target_node;
        }
        current_b = current_b->next;
    }
    ft_printf("\nlowest cost: %d\n", lowest_cost);
    if (cheapest_target != NULL)
        execute_move(cheapest_target, *stack_a, *stack_b);
    ft_printf("this is current state of stack_a: \n\n"); // 
    ft_lstprint(*stack_a);                               // see stack
    ft_printf("this is current state of stack_b: \n\n"); // start state
    ft_lstprint(*stack_b);     
}

// test function to see index

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

/*

void find_and_execute_cheapest_move(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *current_b = *stack_b;
    t_stack *cheapest_node_a; // Target node in stack_a for the cheapest move
    t_stack *cheapest_node_b; // Element in stack_b for the cheapest move
    int lowest_cost = INT_MAX; // Initialize lowest cost to a large value

    // Iterate through stack_b
    while (current_b != NULL)
    {
        // Find the target node in stack_a and calculate the cost
        t_stack *target_node_a = find_target_node(*stack_a, current_b);
        int cost = calculate_cost(target_node_a, current_b, *stack_a);

        // Update lowest_cost and associated nodes if this move is cheaper
        if (cost < lowest_cost)
        {
            lowest_cost = cost;
            cheapest_node_a = target_node_a;
            cheapest_node_b = current_b;
        }

        current_b = current_b->next; // Move to the next element in stack_b
    }

    // Execute the cheapest move if found
    if (lowest_cost != INT_MAX) // If a cheaper move was found
    {
        execute_move(stack_a, stack_b, cheapest_node_a, cheapest_node_b);
    }
}

*/
