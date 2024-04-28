/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:21:47 by asyed             #+#    #+#             */
/*   Updated: 2024/04/28 21:57:51 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// stack: [B -> next(A memory address)] -> [A -> next(NULL)] -> NULL (before swap)
// *stack -> next = accessing the next element in node
// (*stack) -> next = pointing to the next element in node

void    swap(t_list **stack)

{
    t_list  *goingdown;
    t_list  *goingup;

    goingdown = *stack; // first node, B
    goingup = (*stack)->next; // second node, A
    if (goingdown && goingup) // not empty, 2 node exist
    {   // make first node point to the node after second node
        goingdown ->next = goingup ->next; // first node now points to NULL [A->NULL]
        goingup ->next = goingdown; // second node now point to first node [B-> next(A memory address)]
        *stack = goingup; // head of the list now point to 2nd node [B]
    }
}

// stack: [A -> next(B memory address)] -> [B -> next(NULL)] -> NULL (before swap)

void    swap_a(t_list **stack_a)

{
    swap(stack_a);
    ft_printf("sa\n");
}

void    swap_b(t_list **stack_b)

{
    swap(stack_b);
    ft_printf("sb\n");
}

void    swap_a_and_b(t_list **stack_a, t_list **stack_b)

{
    swap(stack_a);
    swap(stack_b);
    ft_printf("ss\n");
}