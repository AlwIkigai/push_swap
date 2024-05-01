/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:32:19 by asyed             #+#    #+#             */
/*   Updated: 2024/05/01 15:09:40 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void    rotate(t_stack **stack)

{
    t_stack  *first; 
    t_stack  *last;

    if (*stack && (*stack)-> next) //not empty and 2 nodes at least
    {
        first = *stack; // assign as first
        last = *stack; // later usage of next to reach last node
        while (last->next) // traverse to end of node
        {
            last = last->next; // update last to next variable
        }
        last->next = first; // update last next to point to first
        *stack = first->next; // update head of the list, a very important step
        first->next = NULL; // first points to NULL
    }
}

void    rotate_a(t_stack **stack_a)

{
    rotate(stack_a);
    ft_printf("ra\n");
}

void    rotate_b(t_stack **stack_b)

{
    rotate(stack_b);
    ft_printf("rb\n");
}

void    rotate_a_and_b(t_stack **stack_a, t_stack **stack_b)

{
    rotate(stack_a);
    rotate(stack_b);
    ft_printf("rr\n");
}