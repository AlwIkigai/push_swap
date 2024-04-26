/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:22:28 by asyed             #+#    #+#             */
/*   Updated: 2024/04/26 15:13:28 by asyed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	int		start;
	long	num;

	start = 1;
	if (ac > 1)
	{
		if (notdigits(&av[start]) || gotduplicate(&av[start]))
		{
			firsterrorcheck();
		}
		while (start <= ac - 1)
		{
			num = ft_atol(av[start]);
			{
				if (num < INT_MIN || num > INT_MAX)
				{
					firsterrorcheck();
				}
				start++;
			}
		}
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