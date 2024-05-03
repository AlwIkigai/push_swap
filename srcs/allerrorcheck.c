/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allerrorcheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:05:26 by asyed             #+#    #+#             */
/*   Updated: 2024/05/03 13:09:36 by asyed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	gotduplicate(char **intargs) // takes in av in full

{
	int start;
	int next;

	start = 0;
	while (intargs[start] != NULL && intargs[start + 1] != NULL)
	// 2 string to compare
	{
		next = start + 1;
		while (intargs[next])
		{
			if (ft_strcmp(intargs[start], intargs[next]) == 0)
			// compare if they are equal
			{
				return (1); // return true if they are equal
			}
			next++; // move to next av
		}
		start++;
	}
	return (0);
}

int	notdigits(char **intargs)

{
	int array;
	int index;

	array = 0;
	while (intargs[array]) // traverse through AV
	{
		index = 0;
		if (intargs[array][index] == '-' && intargs[array][index]) // check for first index and next index not '/0'
		{
			index = 1;
		}
		while (intargs[array][index]) // traverse through index
		{
			if (intargs[array][index] < '0' || intargs[array][index] > '9') // not digits
			{
				return (1);
			}
			index++;
		}
		array++;
	}
	return (0);
}

void	firsterrorcheck(void)

{
	ft_putstr_fd("Error\n", 2);
	// how to do it on standard error (fd2) 2nd parameter
	exit(1); // 1 means exit on error 0 means no error
}

int is_sorted(t_stack *stack)
{
    while (stack && stack->next)
    {
        if (stack->content > stack->next->content)
            return (0);
        stack = stack->next;
    }
    return (1);
}
