/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:32:43 by asyed             #+#    #+#             */
/*   Updated: 2024/05/01 21:57:38 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void    sort_stack_a(t_stack **stack_a, t_stack	**stack_b)

{
    int	stack_len_a;

    stack_len_a = ft_lstsizeps(*stack_a); // check linked list size
	
	ft_printf("size of stack_a is: %d\n\n", stack_len_a); // check len
	// sort 2
	if (stack_len_a == 2)
	{
		sort_two_elements(stack_a);
        ft_printf("\nthis is after sort 2: \n\n"); // check operation
	}

	// sort 3 
	else if (stack_len_a == 3)
	{
		sort_three_elements(stack_a);
		ft_printf("\nthis is after sort 3: \n\n"); // check operation
	}
	else if (stack_len_a > 3)
	{
		sort_stack(stack_a, stack_b);
	}
	ft_lstprint(*stack_a); // see stack
    
}


void    sort_stack(t_stack **stack_a,t_stack **stack_b)
{
	//t_stack  *target_node;
	
	find_index_position(stack_a);
	
	// Print out the indices of each node
    t_stack *current;
	
	current = *stack_a;
    while (current != NULL)
    {
        ft_printf("Index: %d\n", current->index);
        current = current->next;
    }
	ft_printf("\n");
	confirm_rank_in_position(stack_a);

	// for testing, update current
	current = *stack_a;
	while (current != NULL)
    {
        ft_printf("Rank: %d\n", current->rank);
        current = current->next;
    }
    push_elements_to_stack_b(stack_a, stack_b);
	// update initial index

	// find confirm value in position
    sort_three_elements(stack_a);
    // target_node = find_target_node_a(*stack_a, *stack_b);
    // calculate cost
}

void    push_elements_to_stack_b(t_stack **stack_a, t_stack **stack_b)

{
	t_stack	*current;
    int stack_len_a;	
	int median;

	current = *stack_a;
	stack_len_a = ft_lstsizeps(*stack_a);
	median = find_median_position(stack_a);
    
	push_below_median(stack_a, stack_b, stack_len_a, median);
	push_remainder(stack_a, stack_b);
}

void	push_below_median(t_stack **stack_a, t_stack **stack_b, int stack_len_a, int median)

{
	t_stack	*current;
	
	current = *stack_a;
	while (stack_len_a > 3)
    {
		if (current->rank <= median)
		{
			push_b(stack_a, stack_b);
			current = *stack_a;
		}
		else
		{
			rotate_a(stack_a);
			current = *stack_a;
		}
	stack_len_a--;
	}
}

void	push_remainder(t_stack **stack_a, t_stack **stack_b)

{
	t_stack	*current;
	int	remainder;

	remainder = ft_lstsizeps(*stack_a);

	while (remainder > 3)
	{
		push_b(stack_a, stack_b);
		current = *stack_a;
		remainder--;
	}
}

/*


void	execute_rotation(t_stack **stack_a, t_stack *target_node)

{
	int	stack_len;
	int	median_position;
	int	target_position;

	stack_len = ft_lstsizeps(*stack_a);
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

*/