/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_cost.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:02:55 by asyed             #+#    #+#             */
/*   Updated: 2024/05/02 21:26:38 by asyed            ###   ########.fr       */
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

    if (target->index <= median_a)
    {   // below median cost is index
        cost+= target->index;
    }
    else
    {   // above median cost is (ken - index)
        cost+=(target_len - target->index);
    }
    if (stack_b->index <= median_b)
    {   // below median cost is index
        cost+= target->index;
    }
    else
    {   // above median cost is (ken - index)
        cost+=(stack_b_len - stack_b->index);
    }
    if (target->index <= median_a && stack_b->index <= median_b || 
    target->index >= median_a && stack_b->index >= median_b)
    
}