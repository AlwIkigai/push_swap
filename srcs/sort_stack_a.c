/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:32:43 by asyed             #+#    #+#             */
/*   Updated: 2024/04/30 19:06:39 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void    sort_stack_a(t_list **stack_a, t_list	**stack_b)

{
    size_t	stack_len_a;

    stack_len_a = ft_lstsize(*stack_a); // check linked list size
	
	ft_printf("size of stack_a is: %d\n", stack_len_a); // check len
	// sort 2
	if (stack_len_a == 2)
	{
		sort_two_elements(stack_a);
        ft_printf("\nthis is after sort 2: \n"); // check operation
	}

	// sort 3 
	else if (stack_len_a == 3)
	{
		sort_three_elements(stack_a);
		ft_printf("\nthis is after sort 3: \n"); // check operation
	}
	else if (stack_len_a > 3)
	{
		sort_stack(stack_a, stack_b);
		
	}
	ft_lstprint(*stack_a); // see stack
    
}

void    push_elements_to_stack_b(t_list **stack_a, t_list **stack_b)

{
    int stack_len_a;

    stack_len_a = ft_lstsize(*stack_a);
    while (stack_len_a > 3)
    {
        push_b(stack_a, stack_b);
        stack_len_a--;
    }
    
}

int find_median_position(t_list *stack)

{
    int stack_len;
    int median;
    if (stack == NULL)
        exit (EXIT_FAILURE);
    stack_len = ft_lstsize(stack);
    median = stack_len / 2;
    return (median);
}

void	execute_rotation(t_list **stack_a, t_list *target_node)

{
	int	stack_len;
	int	median_position;
	int	target_position;

	stack_len = ft_lstsize(*stack_a);
	median_position = stack_len / 2;
	target_position = find_position(*stack_a, target_node);
	if (target_position > median_position)
	{
		while (*stack_a != target_node)
		{
			rotate_a(stack_a);
		}
		
	}
	else
	{
		while (*stack_a != target_node)
		{
			reverse_rotate_a(stack_a);
		}
	}
}
