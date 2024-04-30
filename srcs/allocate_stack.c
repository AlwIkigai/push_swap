/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:48:44 by asyed             #+#    #+#             */
/*   Updated: 2024/04/30 11:20:07 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

t_list **allocate_stack_a (int ac, char **av)
{
    t_list  **stack_a;
    int		start;
    long	num;
    
    if (ac <= 1)
        return (NULL);
    start = 1;
    if (notdigits(&av[start]) || gotduplicate(&av[start]))
        firsterrorcheck();
    stack_a = (t_list **)malloc(sizeof(t_list *)); // move to utils to allocate 
    if (stack_a == NULL)
        return (NULL); // int main cannot accept NULL
    *stack_a = NULL;
    while (start < ac)
    {
        num = ft_atol(av[start]);
        {
            if (num < INT_MIN || num > INT_MAX)
                firsterrorcheck();
            ft_lstadd_back(stack_a, ft_lstnew((void *)num)); // add first and add new node
            start++;
        }
    }
    return (stack_a);
}

t_list  **allocate_stack_b(void)

{
    t_list  **stack_b;

    stack_b = (t_list **)malloc(sizeof(t_list *));
    if (stack_b == NULL)
    {
        return (NULL);
    }
    *stack_b = NULL;
    return (stack_b);
}
