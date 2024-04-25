/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:34:32 by asyed             #+#    #+#             */
/*   Updated: 2024/04/17 15:34:32 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// reverse rotate A + B
// last element becomes first, the rest push down for STACK A and STACK B

/*

STACK A -> STACK B

1 (down)    2 (down)
3 (down)    4^(first)
5^(first)

in this case 5 will be first and 1 and 3 pushed down, 4 will be first and 2 pushed down

*/