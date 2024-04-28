/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 21:07:53 by asyed             #+#    #+#             */
/*   Updated: 2024/04/28 22:47:42 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void    push(t_list **origin, t_list **destination)

{
    t_list  *top;

    if (*origin) // not empty
    {
        top = *origin; // update top node pointer
        *origin = (*origin)->next; // shift head pointer to next node
        top->next = *destination; // top element point to destination first node
        *destination = top; // move destination head pointer to top
    }

}

void    push_a(t_list **stack_b, t_list **stack_a)

{
    push(stack_b, stack_a);
    ft_printf("pa\n");
}

void    push_b(t_list **stack_a, t_list **stack_b)

{
    push(stack_a, stack_b);
    ft_printf("pb\n");
}
