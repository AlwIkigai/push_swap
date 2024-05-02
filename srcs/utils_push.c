/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:05:16 by asyed             #+#    #+#             */
/*   Updated: 2024/05/02 19:01:48 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void    push(t_stack **origin, t_stack **destination)

{
    t_stack  *top;

    if (*origin) // not empty
    {
        top = *origin; // update top node pointer
        *origin = (*origin)->next; // shift head pointer to next node
        top->next = *destination; // top element point to destination first node
        *destination = top; // move destination head pointer to top
    }

}

void    push_a(t_stack **stack_b, t_stack **stack_a)

{
    push(stack_b, stack_a);
    ft_printf("pa\n");
}

void    push_b(t_stack **stack_a, t_stack **stack_b)

{
    push(stack_a, stack_b);
    ft_printf("pb\n");
}
