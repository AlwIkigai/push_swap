/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:43:43 by asyed             #+#    #+#             */
/*   Updated: 2024/05/07 15:22:09 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void    execute_move(t_stack cheapest_target, t_stack **stack_a, t_stack **stack_b)

{
    float stack_a_len;
    float stack_b_len;
    float median_a;
    float median_b;
    
    stack_a_len = (float)ft_lstsizeps(*stack_a);
    stack_b_len = (float)ft_lstsizeps(*stack_b);
    median_a = stack_a_len / 2.0;
    median_b = stack_b_len / 2.0;

    if (cheapest_target.index <= median_a && cheapest_target.target_link <= median_b) // less than median for both
        move_both_above_median_line(cheapest_target, stack_a, stack_b); // less 
    else if (cheapest_target.index > median_a && cheapest_target.target_link > median_b) // more than median for both
        move_both_below_median_line(cheapest_target, stack_a, stack_b); // more
    else if (cheapest_target.index <= median_a && cheapest_target.target_link > median_b)
        move_target_above_stack_b_below_median_line(cheapest_target, stack_a, stack_b); // target less than and stack b more than median
    else if (cheapest_target.index > median_a && cheapest_target.target_link <= median_b)
        move_stack_b_below_target_above_median_line(cheapest_target, stack_a, stack_b); // stack b less than median and target more than median
}

void    move_both_above_median_line(t_stack cheapest_target,t_stack **stack_a, t_stack **stack_b)

{
    int rr;
    int ra;
    int rb;

    rr = 0;
    ra = 0;
    rb = 0;
    if (cheapest_target.index > (*stack_b)->index)
    {
        rr = cheapest_target.both_cost; // rr
        ra = cheapest_target.a_cost; // ra
        while (rr-- > 0 && ft_lstsizeps(*stack_b) > 1)
            rotate_a_and_b(stack_a, stack_b);
        while (ra-- > 0)
            rotate_a(stack_a);
    }
    else
    {
        rr = cheapest_target.both_cost; // rr
        rb = cheapest_target.b_cost; // rb
        while (rr-- > 0 && ft_lstsizeps(*stack_b) > 1)
            rotate_a_and_b(stack_a, stack_b);
        while (rb-- > 0)
            rotate_b(stack_b);
    }
    push_a(stack_b, stack_a);
}


void    move_both_below_median_line(t_stack cheapest_target, t_stack **stack_a, t_stack **stack_b)

{
    int rrr;
    int rra;
    int rrb;

    rrr = 0;
    rra = 0;
    rrb = 0;
    if (ft_lstsizeps(*stack_a) - cheapest_target.index > ft_lstsizeps(*stack_b) - (*stack_b)->index)
    {
        rrr = cheapest_target.both_cost; // rrr
        rra = cheapest_target.a_cost; // rra
        while (rrr-- > 0 && ft_lstsizeps(*stack_b) > 1)
            reverse_rotate_a_and_b(stack_a, stack_b);
        while (rra-- > 0)
            reverse_rotate_a(stack_a);
    }
    else
    {
        rrr = cheapest_target.both_cost; // rrr
        rrb = cheapest_target.b_cost; // rrb
        while (rrr-- > 0 && ft_lstsizeps(*stack_b) > 1)
            reverse_rotate_a_and_b(stack_a, stack_b); 
        while (rrb-- > 0)
            reverse_rotate_b(stack_b); // rrb
    }
    push_a(stack_b, stack_a);
}

void move_target_above_stack_b_below_median_line(t_stack cheapest_target, t_stack **stack_a, t_stack **stack_b)

{
    int ra;
    int rrb;

    ra = 0;
    rrb = 0;
    ra = cheapest_target.a_cost;
    rrb = cheapest_target.b_cost;
    while (ra-- > 0)
        rotate_a(stack_a); 
    while (rrb-- > 0)
        reverse_rotate_b(stack_b); 
    push_a(stack_b, stack_a);
}   

void move_stack_b_below_target_above_median_line(t_stack cheapest_target, t_stack **stack_a, t_stack **stack_b)

{
    int rra;
    int rb;

    rra = 0;
    rb = 0;
    rra = cheapest_target.a_cost;
    rb = cheapest_target.b_cost;
    while (rra-- > 0)
        reverse_rotate_a(stack_a); 
    while (rb-- > 0)
        rotate_b(stack_b); 
    push_a(stack_b, stack_a);
}
