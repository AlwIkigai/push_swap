/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:22:28 by asyed             #+#    #+#             */
/*   Updated: 2024/04/29 18:03:35 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list	**stack_a;
	t_list	**stack_b;
	size_t	stacklen;

	stack_a = allocate_stack_a(ac, av);
	stack_b = allocate_stack_b();
	// allocate stack_b?
	
	stacklen = ft_lstsize(*stack_a); // check linked list size
	ft_printf("size of stack_a is: %d\n", stacklen); // check len
	ft_printf("this is original state of stack_a: \n"); // check swap
	ft_lstprint(*stack_a); // see stack

	// sort 2
	if (ft_lstsize(*stack_a) == 2)
	{
		ft_printf("\nthis is after sort 2: \n"); // check operation
		sort_two_elements(stack_a);
	}

	// sort 3 
	if (ft_lstsize(*stack_a) == 3)
	{
		sort_three_elements(stack_a);
		ft_printf("\nthis is after sort 3: \n"); // check operation
	}

	// test sort 2
	
	ft_lstprint(*stack_a); // see stack

	// free nodes
	freenodes(stack_a); // free all nodes
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