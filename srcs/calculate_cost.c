/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_cost.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:02:55 by asyed             #+#    #+#             */
/*   Updated: 2024/05/03 12:26:54 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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
        cost = target_below_stack_b_above_median(target, stack_b, target_len, stack_b_len);
    }
    else if (target->index > median_a && stack_b->index <= median_b)
    {   
        cost = stack_b_below_target_above_median(target, stack_b, target_len, stack_b_len);
    }
    return (cost);
}

int calculate_below_median(t_stack *target, t_stack *stack_b)

{
    int total;
    int both;
    int target_cost;
    
    if (target->index > stack_b->index)
    {
        total = target->index;
        both = stack_b->index; // rr
        target_cost = total - both; // ra
    }
    else
    {
        total = stack_b->index;
        both = target->index; // rr
        target_cost = total - both; // rb
    }
    return (total);
}

int calculate_above_median(t_stack *target, t_stack *stack_b,int target_len, int stack_b_len)

{
    int total;
    int both;
    int target_cost;
    
    if (target_len - target->index > stack_b_len - stack_b->index)
    {
        total = target->index;
        both = stack_b->index; // rr
        target_cost = total - both; // ra  
    }
    else
    {
        total = stack_b->index;
        both = target->index; // rr
        target_cost = total - both; // rb
    }
    return (total);
}

int target_below_stack_b_above_median(t_stack *target, t_stack *stack_b,int target_len, int stack_b_len)

{
    int total;
    int both;
    int target_cost;
    int b_cost;   
        
    target_cost = target->index;
    b_cost = stack_b_len - stack_b->index;
    total = target_cost + b_cost;
    return (total);
}

int stack_b_below_target_above_median(t_stack *target, t_stack *stack_b,int target_len, int stack_b_len)

{
    int total;
    int both;
    int target_cost;
    int b_cost;

    target_cost = target_len - target->index;
    b_cost = stack_b->index;
    total = target_cost + b_cost;
    return (total);
}
