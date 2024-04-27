/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:22:28 by asyed             #+#    #+#             */
/*   Updated: 2024/04/27 21:11:04 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void	ftest(t_list **lst)
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	while (current)
	{
		next = current -> next;
		//del(current -> content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

int	main(int ac, char *av[])
{
	int		start;
	long	num;
	t_list	**stack_a;
	//t_list	**stack_b;
	size_t	stacklen;

	start = 1;
	

	//stack_b = NULL;

	if (ac > 1)
	{
		if (notdigits(&av[start]) || gotduplicate(&av[start]))
		{
			firsterrorcheck();
		}
		stack_a = (t_list **)malloc(sizeof(t_list *)); // move to utils to allocate t_list allocatestacka (char **av)
		/*
		
		if (stack_a == NULL)
		{
			return (NULL); // int main cannot accept NULL
		}
		*/

		*stack_a = NULL;
		while (start <= ac - 1)
		{
			num = ft_atol(av[start]);
			{
				if (num < INT_MIN || num > INT_MAX)
				{
					firsterrorcheck();
				}
				ft_lstadd_back(stack_a, ft_lstnew((void *)num)); // add first and add new node
				start++;
			}
		}
		stacklen = ft_lstsize(*stack_a); // check linked list size
		ft_printf("size of stack_a is: %d\n", stacklen);
		ft_lstprint(*stack_a);
		ftest(stack_a); // free all nodes
		free(stack_a);
	}
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