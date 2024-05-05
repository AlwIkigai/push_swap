/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:43:43 by asyed             #+#    #+#             */
/*   Updated: 2024/05/05 21:15:45 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void    execute_move(t_stack *cheapest_target, t_stack *stack_a, t_stack *stack_b)

{
    int cost;
    int target_len;
    int stack_b_len;
    int median_a;
    int median_b;
    
    cost = 0;
    target_len = ft_lstsizeps(stack_a);
    stack_b_len = ft_lstsizeps(stack_b);
    median_a = target_len / 2;
    median_b = stack_b_len / 2;

    if (cheapest_target->index < median_a && stack_b->index < median_b) // less than median for both
        move_below_median(cheapest_target, stack_a, stack_b); // less 
    // else if (cheapest_target->index >= median_a && stack_b->index >= median_b) // more than median for both
        // move_above_median(stack_a, stack_b, target_len, stack_b_len); // more
    // else if (cheapest_target->index < median_a && stack_b->index >= median_b)
        // move_stack_a_below_stack_b_above_median(cheapest_target, stack_b, stack_b_len); // target less than and stack b more than median
    // else if (cheapest_target->index >= median_a && stack_b->index < median_b)
        // stack_b_below_stack_a_above_median(cheapest_target, stack_b, target_len); // stack b less than median and target more than median
    // cost = cheapest_target->total_cost;
}

void    move_below_median(t_stack *cheapest_target,t_stack *stack_a, t_stack *stack_b)

{
    int rr;
    int ra;
    int rb;

    rr = 0;
    ra = 0;
    rb = 0;
    
    if (cheapest_target->index > stack_b->index)
    {
        rr = cheapest_target->both_cost; // rr
        ra = cheapest_target->a_cost; // ra
        while (rr-- > 0)
            rotate_a_and_b(&stack_a, &stack_b);
        while (ra-- > 0)
            rotate_a(&stack_a);
    }
    else
    {
        rr = cheapest_target->both_cost; // rr
        rb = cheapest_target->b_cost; // rb
        while (rr-- > 0)
            rotate_a_and_b(&stack_a, &stack_b);
        while (rb-- > 0)
            rotate_b(&stack_b);
    }
    push_a(&stack_b, &stack_a);
}

/*

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

*/
