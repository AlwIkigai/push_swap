/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_cost.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:02:55 by asyed             #+#    #+#             */
/*   Updated: 2024/05/05 20:56:09 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

int calculate_cost(t_stack *target, t_stack *stack_a, t_stack *stack_b, int stack_b_len)

{
    int cost;
    int target_len;
    // int stack_b_len;
    int median_a;
    int median_b;
    
    cost = 0;
    target_len = ft_lstsizeps(stack_a);
    // stack_b_len = ft_lstsizeps(stack_b);
    median_a = target_len / 2;
    median_b = stack_b_len / 2;

    if (target->index < median_a && stack_b->index < median_b)
        calculate_below_median(target, stack_b); // less 
    else if (target->index >= median_a && stack_b->index >= median_b)
        calculate_above_median(target, stack_b, target_len, stack_b_len); // more
    else if (target->index < median_a && stack_b->index >= median_b)
        target_below_stack_b_above_median(target, stack_b, stack_b_len);
    else if (target->index >= median_a && stack_b->index < median_b)
        stack_b_below_target_above_median(target, stack_b, target_len);
    cost = target->total_cost;
    return (cost);
}

void    calculate_below_median(t_stack *target, t_stack *stack_b)

{
    if (target->index > stack_b->index)
    {
        target->total_cost = target->index; // total cost
        target->both_cost = stack_b->index; // rr
        target->a_cost = target->total_cost - target->both_cost; // ra
        
    }
    else
    {
        target->total_cost = stack_b->index; // total cost
        target->both_cost = target->index; // rr
        target->b_cost = target->total_cost - target->both_cost; // rb
    }
}


void    calculate_above_median(t_stack *target, t_stack *stack_b,int target_len, int stack_b_len)

{
    if (target_len - target->index > stack_b_len - stack_b->index)
    {
        target->total_cost = target_len - target->index; // total cost
        target->both_cost = stack_b_len - stack_b->index; // rr
        target->a_cost = target->total_cost - target->both_cost; // ra
    }
    else
    {
        target->total_cost = stack_b_len - stack_b->index; // total cost
        target->both_cost = target_len - target->index; // rr
        target->a_cost = target->total_cost - target->both_cost; // rb
    }
}

void target_below_stack_b_above_median(t_stack *target, t_stack *stack_b, int stack_b_len)

{
    target->a_cost = target->index; // stack_a_move = ra
    target->b_cost = stack_b_len - stack_b->index; // stack_b_move = rrb
    target->total_cost = target->a_cost + target->b_cost; // number of ra + rrb
}   


void stack_b_below_target_above_median(t_stack *target, t_stack *stack_b,int target_len)

{
    target->a_cost = target_len - target->index; // stack_a_move = rra
    target->b_cost = stack_b->index; // stack_b_move = rb
    target->total_cost = target->a_cost + target->b_cost; // number of rra + rb
}

/*

// Function to find the cheapest move and execute it
void find_and_execute_cheapest_move(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *current = *stack_a;
    t_stack *cheapest_node = NULL;
    int cheapest_cost = INT_MAX;

    // Find the node with the cheapest cost
    while (current != NULL)
    {
        int cost = calculate_cost(current, *stack_a, *stack_b, median_a, median_b);
        if (cost < cheapest_cost)
        {
            cheapest_node = current;
            cheapest_cost = cost;
        }
        current = current->next;
    }

    // Execute the move for the node with the cheapest cost
    if (cheapest_node != NULL)
    {
        // Here you would call the appropriate function to perform the move
        // For example, if you have a function called `execute_move`:
        execute_move(stack_a, stack_b, cheapest_node);
    }
}

*/
/*

void execute_move(t_stack **stack_a, t_stack **stack_b, t_stack *cheapest_node)
{
    // Determine the move to make based on properties of cheapest_node
    // This will depend on your specific implementation
    if (cheapest_node->a_cost <= median_a)
    {
        // Perform some operation on stack_a and stack_b
    }
    else if (cheapest_node->a_cost > median_a)
    {
        // Perform some other operation on stack_a and stack_b
    }
    // ... more conditions ...
}


*/