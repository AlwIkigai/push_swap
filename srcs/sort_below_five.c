/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_below_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:57:31 by asyed             #+#    #+#             */
/*   Updated: 2024/04/29 18:06:23 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void    sort_two_elements(t_list **stack_a)

{
    t_list  *first;
    t_list  *second;

    first = *stack_a;
    second = (*stack_a)->next;

    if (first && second && (first)->content > second->content)
    {
        swap_a(stack_a);
    }
}

void    sort_three_elements(t_list **stack_a)
// 1 2 3 do nothing
{
    long  first;
    long  second;
    long  third;

    first = (long)(*stack_a)->content;
    second = (long)(*stack_a)->next->content;
    third = (long)(*stack_a)->next->next->content;

    if (first > second && second < third && first < third)
    {   // 2 1 3 sa (first > second && second < third && first < third)
        swap_a(stack_a);
    }
    else if (first < second && second > third && first < third) // ISSUE
    {   // 1 3 2 sa + rra (first < second && second > third && first < third)
        reverse_rotate_a(stack_a);
        swap_a(stack_a);
    }
    else if (first > second && second < third && first > third)
    {   // 3 1 2 ra (first > second && second < third && first > third)
        rotate_a(stack_a);
    }
    else if (first > second && second > third && first > third) // ISSUE
    {   // 3 2 1 sa + ra (first > second && second > third && first > third)
        rotate_a(stack_a);
        swap_a(stack_a);
    }
    else if (first < second && second > third && first > third) // ISSUE
    {   // 2 3 1 rra (first < second && second > third && first > third)
        reverse_rotate_a(stack_a);
    }
}
