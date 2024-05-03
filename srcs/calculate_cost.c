/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_cost.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:02:55 by asyed             #+#    #+#             */
/*   Updated: 2024/05/03 15:08:43 by asyed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int calculate_cost(t_stack *target, t_stack *stack_a, t_stack *stack_b, int median_a, int median_b)

{
    int cost;
    int target_len;
    int stack_b_len;

    cost = 0;
    target_len = ft_lstsizeps(stack_a);
    stack_b_len = ft_lstsizeps(stack_b);

    if (target->index <= median_a && stack_b->index <= median_b)
    {   
        cost = calculate_below_median(target, stack_b);
    }
    else if (target->index > median_a && stack_b->index > median_b)
    {   
        cost = calculate_above_median(target, stack_b, target_len, stack_b_len);
    }
    else if (target->index <= median_a && stack_b->index > median_b)
    {   
        cost = target_below_stack_b_above_median(target, stack_b, stack_b_len);
    }
    else if (target->index > median_a && stack_b->index <= median_b)
    {   
        cost = stack_b_below_target_above_median(target, stack_b, target_len);
    }
    return (cost);
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
int calculate_below_median(t_stack *target, t_stack *stack_b)

{
    int total;
    // int both;
    // int target_cost;
    
    if (target->index > stack_b->index)
    {
        total = target->index;
        //both = stack_b->index; // rr
        // target_cost = total - both; // ra
    }
    else
    {
        total = stack_b->index;
        //both = target->index; // rr
        // target_cost = total - both; // rb
    }
    return (total);
}

/*

void calculate_below_median(t_stack *target, t_stack *stack_b)
{
    if (target->index > stack_b->index)
    {
        target->target_cost = target->index;
    }
    else
    {
        target->target_cost = stack_b->index;
    }
}

*/
int calculate_above_median(t_stack *target, t_stack *stack_b,int target_len, int stack_b_len)

{
    int total;
    // int both;
    // int target_cost;
    
    if (target_len - target->index > stack_b_len - stack_b->index)
    {
        total = target->index;
        // both = stack_b->index; // rr
        // target_cost = total - both; // ra  
    }
    else
    {
        total = stack_b->index;
        // both = target->index; // rr
        // target_cost = total - both; // rb
    }
    return (total);
}

/*

void calculate_above_median(t_stack *target, t_stack *stack_b, int target_len, int stack_b_len)
{
    if (target_len - target->index > stack_b_len - stack_b->index)
    {
        target->target_cost = target->index;
    }
    else
    {
        target->target_cost = stack_b->index;
    }
}

*/
int target_below_stack_b_above_median(t_stack *target, t_stack *stack_b, int stack_b_len)

{
    int total;
    int target_cost;
    int b_cost;   
        
    target_cost = target->index;
    b_cost = stack_b_len - stack_b->index;
    total = target_cost + b_cost;
    return (total);
}

/*

void target_below_stack_b_above_median(t_stack *target, t_stack *stack_b, int stack_b_len)
{
    target->target_cost = target->index;
    target->b_cost = stack_b_len - stack_b->index;
}

*/

int stack_b_below_target_above_median(t_stack *target, t_stack *stack_b,int target_len)

{
    int total;
    int target_cost;
    int b_cost;

    target_cost = target_len - target->index;
    b_cost = stack_b->index;
    total = target_cost + b_cost;
    return (total);
}

/*

void stack_b_below_target_above_median(t_stack *target, t_stack *stack_b, int target_len)
{
    target->target_cost = target_len - target->index;
    target->b_cost = stack_b->index;
}

*/

/*

void execute_move(t_stack **stack_a, t_stack **stack_b, t_stack *cheapest_node)
{
    // Determine the move to make based on properties of cheapest_node
    // This will depend on your specific implementation
    if (cheapest_node->target_cost <= median_a)
    {
        // Perform some operation on stack_a and stack_b
    }
    else if (cheapest_node->target_cost > median_a)
    {
        // Perform some other operation on stack_a and stack_b
    }
    // ... more conditions ...
}


*/