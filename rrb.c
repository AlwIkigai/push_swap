/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:34:34 by asyed             #+#    #+#             */
/*   Updated: 2024/04/17 16:05:01 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// reverse rotate b
// last element becomes first, the rest push down for STACK B

/*

STACK A -> STACK B

1           2 (down) 
3           4 ^(first)
5

in this case 4 will be first and 2 pushed down

*/