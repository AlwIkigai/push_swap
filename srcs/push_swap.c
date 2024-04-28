/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:22:28 by asyed             #+#    #+#             */
/*   Updated: 2024/04/28 22:22:22 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list	**stack_a;
	//t_list	**stack_b;
	size_t	stacklen;

	stack_a = allocate_stack_a(ac, av);
	// allocate stack_b?
	
	stacklen = ft_lstsize(*stack_a); // check linked list size
	ft_printf("size of stack_a is: %d\n", stacklen); // check len
	ft_printf("this is original state of stack_a: \n"); // check swap
	ft_lstprint(*stack_a); // see stack

	// test swap operation
	
	ft_printf("\nthis is after swap_a: \n"); // check swap
	swap_a(stack_a); // test swap
	ft_printf("swap_a operation is to SWAP TOP 2 in stack_a: \n"); // check swap
	ft_lstprint(*stack_a); // see stack

	// sb
	// ss

	// test rotate operation
	
	ft_printf("\nthis is after rotate_a: \n"); // check rotate
	rotate_a(stack_a); // test rotate
	ft_printf("rotate_a operation is to rotate FIRST TO LAST in stack_a: \n"); 
	ft_lstprint(*stack_a); // see stack

	// rb
	// rr

	
	// test reverse rotate operation
	
	ft_printf("\nthis is after reverse_rotate_a: \n"); // check rotate
	reverse_rotate_a(stack_a); // test rotate
	ft_printf("rotate_a operation is to rotate LAST TO FIRST in stack_a: \n"); 
	ft_lstprint(*stack_a); // see stack

	// rrb
	// rrr

	

	// test push operation
	
	// free nodes
	freenodes(stack_a); // free all nodes
	free(stack_a);
	return (0);
}

/*

// input validation to stack a
// first arg top of stack
// -> ?
// can be multiple AV
// -> need to atoi
// -> if receive as a string, need to split
// can be negative or positive int
// -> but must be within range

// if no parameter specified,
// program must not display anything and
// give the prompt back
//  -> ac == 1
// if error, display "Error" followed by a '\n' on standard error
// if duplicate (error)
// -> need to do check against current index
// beyond range
// not int

*/