/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:01:24 by asyed             #+#    #+#             */
/*   Updated: 2024/05/02 19:01:26 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	**stack_a;
	t_stack	**stack_b;
	
	if (ac <= 1)
	{
		exit (EXIT_FAILURE);	
	}
	stack_a = allocate_stack_a(ac, av);
	stack_b = allocate_stack_b();

	ft_printf("this is original state of stack_a: \n\n"); // start state
	ft_lstprint(*stack_a); // see stack
	ft_printf("\n"); // start state
	
	// main program
	
	sort_stack_a(stack_a, stack_b);
	
	// own test
	// ft_printf("this is final state of stack_a: \n\n"); // start state
	// ft_lstprint(*stack_a); // see stack
	// ft_printf("this is final state of stack_b: \n\n"); // start state
	// ft_lstprint(*stack_b); // see stack

	// free nodes
	freenodes(stack_a); // free all nodes
	freenodes(stack_b); // stack b should be free when nothing in node
	free(stack_a);
	free(stack_b);
	return (0);
}

/*

	// test swap operation a pass left b and both
	
	ft_printf("\nthis is after swap_a: \n"); // check swap
	swap_a(stack_a); // test swap
	ft_printf("swap_a operation is to SWAP TOP 2 in stack_a: \n"); // check swap
	ft_lstprint(*stack_a); // see stack

	// sb
	// ss

	// test rotate operation a pass left b and both
	
	ft_printf("\nthis is after rotate_a: \n"); // check rotate
	rotate_a(stack_a); // test rotate
	ft_printf("rotate_a operation is to rotate FIRST TO LAST in stack_a: \n"); 
	ft_lstprint(*stack_a); // see stack

	// rb
	// rr

	
	// test reverse rotate operation a pass left b and both
	
	ft_printf("\nthis is after reverse_rotate_a: \n"); // check rotate
	reverse_rotate_a(stack_a); // test rotate
	ft_printf("rotate_a operation is to rotate LAST TO FIRST in stack_a: \n"); 
	ft_lstprint(*stack_a); // see stack

	// rrb
	// rrr

	// test push operation

*/