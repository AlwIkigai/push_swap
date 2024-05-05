/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:47:11 by asyed             #+#    #+#             */
/*   Updated: 2024/05/05 16:35:09 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	// t_stack  *target_node;
	// update initial index
	find_index_position(stack_a);

	t_stack *current;
	// t_stack *stack_b_state;
	// Print out the indices of each node
	current = *stack_a;
	while (current != NULL)
	{
		ft_printf("Index: %d\n", current->index);
		current = current->next;
	}
	ft_printf("\n");

	// find confirm value in position
	confirm_rank_in_position(stack_a);

	// for testing, update current
	current = *stack_a;
	while (current != NULL)
	{
		ft_printf("Rank: %d\n", current->rank);
		current = current->next;
	}
	ft_printf("\n");

    if (is_sorted(*stack_a))
    {
        ft_printf("Stack is already sorted.\n");
		return;
    }
	// push b below median and above median
	push_elements_to_stack_b(stack_a, stack_b);

	ft_printf("this is current state of stack_a: \n\n"); // start state
	ft_lstprint(*stack_a);                               // see stack
	ft_printf("this is current state of stack_b: \n\n"); // start state
	ft_lstprint(*stack_b);                               // see stack
	ft_printf("\n");

	// sort 3 in stack a
	sort_three_elements(stack_a);

	// find target and cost
	find_target_and_calculate_cost(stack_a, stack_b);
	
	/*
	
ove(stack_a, stack_b, cheapest_node);
	*/

	// target_node = find_target_node_a(*stack_a, *stack_b);
	// calculate cost

	/*
	
	// Find the node with the cheapest cost
    t_stack *cheapest_node = find_cheapest_node(*stack_a, *stack_b);

    // Execute the move for the node with the cheapest cost
    if (cheapest_node != NULL)
    {
        execute_move(stack_a, stack_b, cheapest_node);
	}
	
	*/
}