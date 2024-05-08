/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:35:03 by asyed             #+#    #+#             */
/*   Updated: 2024/05/07 21:38:15 by asyed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	**stack_a;
	t_stack	**stack_b;

	if (ac <= 1)
	{
		exit(EXIT_FAILURE);
	}
	stack_a = allocate_stack_a(ac, av);
	stack_b = allocate_stack_b();
	sort_stack_a(stack_a, stack_b);
	freenodes(stack_a);
	freenodes(stack_b);
	free(stack_a);
	free(stack_b);
	return (0);
}
